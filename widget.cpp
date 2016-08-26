#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    deleteList = new QList<int>();
    ui->deleteButton->setEnabled (false);
    QDir::setCurrent ("/Users/yingEos/Desktop/CALENDAR/");
    //qDebug()<<QDir::currentPath();
    //QFile* file = new QFile(QDir::currentPath()+'/'+"test.txt");
    //file->open(QIODevice::ReadWrite);
    //qDebug() << file->readAll() << endl;
    //QTextStream out(file);
    //out<<"test\n"<<endl;
    //out.flush();
    //file->close();
     //qDebug() << file->fileName () << endl;
}

Widget::~Widget()
{
    delete ui;
}


//拖起
void Widget::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("text/uri-list"))
    {
        event->acceptProposedAction();
    }
}

//放下
void Widget::dropEvent(QDropEvent *event)
{
    QList<QUrl> urls = event->mimeData()->urls();
    if (urls.isEmpty()) {
        return;
    }

    QString fileName = urls.first().toLocalFile();
    if (fileName.isEmpty()) {
        return;
    }
    if (readFile(fileName))
    {
        QFileInfo  info;
        info = QFileInfo(fileName);
        QString file_back = info.fileName();
        QString newfile = QDir::currentPath() + '/' + "DragFile/" +file_back;
        qDebug() << newfile << endl;
        if (fileName == newfile){
            return;
        }
        QDir *createfile     = new QDir;
        bool exist = createfile->exists(newfile);
        if (exist)
             createfile->remove(newfile);
        if(!QFile::copy(fileName, newfile))
        {
            qDebug() << "faliure" << endl;
        }
    }
}




//初始化displayList
void Widget::initDisplayList()
{
    ui->displayList->clear ();
    for (int i = 0; i < dataBase->mytodolist->size (); i++)
        ui->displayList->addItem (dataBase->mytodolist->at (i));
}

//初始化database;
void Widget::initDataBase(const QDate &mydate)
{
    QString filePath = QString::number(mydate.year()) + QString::number(mydate.month()) + QString::number(mydate.day ());
    dataBase = new myDataBase(filePath);
    dataBase->readData ();
}

//保存dataBase;
void Widget::saveDataBase()
{
    dataBase->writeData ();
}
//读取文件名，加到todolist里
bool Widget::readFile(const QString &fileName)
{
    bool r = false;
    QFile file(fileName);
    QTextStream in(&file);
    QString content;
    if(file.open(QIODevice::ReadOnly)) {
        in >> content;
        r = true;
    }
   addNote (fileName);
    return r;
}

//设置Drag&Drop按钮

void Widget::on_OnRadiobutton_toggled(bool checked)
{
    if(checked)
         setAcceptDrops(true);
    else
        setAcceptDrops(false);
}

//双击某一天，弹出事件设置窗口

void Widget::on_calendar_activated(const QDate &date)
{
    note = new noteDialog();
    connect (note, SIGNAL(pass(QString)), this,SLOT(addNote(QString)));
    connect (note, SIGNAL(passDetail(myEvent)),this, SLOT(addEvent(myEvent)));
    note->exec();
}

//单击某一天，显示该天事件
void Widget::on_calendar_clicked(const QDate &date)
{
    if(ui->calendar->getdate()!= date)
    {
        ui->calendar->setDate (date);
        qDebug() << date << endl;
        initDataBase(date);
    }
    initDisplayList ();
    qDebug() << dataBase->mytodolist << endl;
}


//添加事件名称到todolist
void Widget::addNote(QString s)
{
    dataBase->mytodolist->push_back(s);
    initDisplayList ();
}

void Widget::addEvent(const myEvent &event)
{
    dataBase->myEventList->push_back(event);
}



/*void Widget::on_displayList_itemClicked(QListWidgetItem *item)
{
    note = new noteDialog();
    note->exec();
}
*/


void Widget::on_clearButton_clicked()
{
    ui->displayList->clear ();
    deleteList = new QList<int>();
}

void Widget::on_deleteButton_clicked()
{
    for (int i = 0; i < deleteList->size (); i++)
        delete ui->displayList->takeItem (deleteList->at (i));
    ui->deleteButton->setEnabled (false);
    deleteList = new QList<int>();
}

//启动删除功能；
void Widget::on_displayList_itemActivated(QListWidgetItem *item)
{
    ui->deleteButton->setEnabled (true);
    int index = ui->displayList->row(item);
    deleteList->push_back (index);
}

