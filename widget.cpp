#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->deleteButton->setEnabled (false);
    ui->editButton->setEnabled (false);
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
    //qDebug() << dataBase->mytodolist->count() << endl;
    for (int i = 0; i < dataBase->mytodolist->count(); i++)
    {
        //qDebug() << "233" << dataBase->mytodolist -> at (i) << endl;
        ui->displayList->addItem (dataBase->mytodolist->at (i));
    }
}

//初始化database;
void Widget::initDataBase(const QDate &mydate)
{

    //qDebug() << filePath << endl;
    dataBase = new myDataBase(mydate);
    dataBase->readData ();
}

//批量保存
void Widget::saveSeries(myEvent temp,int index)
{
    QString signal = temp.getRepeat ();
    qDebug() << "&&&&&" << signal << endl;
    if(signal == tr("OnlyOnce"))
    {
        return;
    }
    if(signal == tr("EveryDay"))
    {
        QDate date = dataBase->mydate;
        for(int i = 0; i < 1000; i++)
        {
            date = date.addDays (1);
            myDataBase *tempDataBase = new myDataBase(date);
            tempDataBase->readData();
            tempDataBase->myEventList->push_back (temp);
            tempDataBase->mytodolist->push_back (dataBase->mytodolist->at (index));
            tempDataBase->writeData ();         
        }
    return;
    }
    if(signal == tr("EveryWeek"))
    {
        QDate date = dataBase->mydate;
        for(int i = 0; i < 100; i++)
        {
            date = date.addDays(7);
            qDebug() << date << endl ;
            myDataBase *tempDataBase = new myDataBase(date);
            tempDataBase->readData();
            tempDataBase->myEventList->push_back (temp);
            tempDataBase->mytodolist->push_back (dataBase->mytodolist->at (index));
            tempDataBase->writeData ();
        }
        return;
    }
    if(signal == tr ("EveryMonth"))
    {
        QDate date = dataBase->mydate;
        for(int i = 0; i < 30; i++)
        {
            date = date.addMonths(1);
            myDataBase *tempDataBase = new myDataBase(date);
            tempDataBase->readData();
            tempDataBase->myEventList->push_back (temp);
            tempDataBase->mytodolist->push_back (dataBase->mytodolist->at (index));
            tempDataBase->writeData ();
        }
        return;
    }
    if(signal == tr("EveryYear"))
    {
        QDate date = dataBase->mydate;
        for(int i = 0; i < 10; i++)
        {
            date = date.addYears(1);
            myDataBase *tempDataBase = new myDataBase(date);
            tempDataBase->readData();
            tempDataBase->myEventList->push_back (temp);
            tempDataBase->mytodolist->push_back (dataBase->mytodolist->at (index));
            tempDataBase->writeData ();         
        }
        return;
    }
    qDebug() << "can't compare" << endl;
}



//保存dataBase，添加批量添加功能
void Widget::saveDataBase()
{
    dataBase->writeData ();
    //qDebug() << "&&&&&&&&"  << dataBase->myEventList->size() << endl;
    for (int i = 0; i< dataBase->myEventList->size ();i++)
    {
        myEvent temp = dataBase->myEventList->at(i);
        saveSeries(temp,i);
    }
}


//读取文件名，加到todolist里
bool Widget::readFile(const QString &fileName)
{
    bool r = false;
    QFile file(fileName);
    QTextStream in(&file);
    if(file.open(QIODevice::ReadOnly)) {
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
    // 如果点击的日期与当前日期相同，就不读取dataBase
    // 如果不同，或者刚刚打开程序，所存日期为空，则重新读取dataBase；
    if(!(ui->calendar->getdate() == date))
    {
        //如果所存日期不为空，先保存刚刚点击的那个日期的信息
        if(!ui->calendar->getdate().isNull ())
        {
            saveDataBase ();
        }

        ui->calendar->setDate (date);
        //qDebug() << "2333" << date << endl;
        initDataBase(date);
        //qDebug() << dataBase->mytodolist->count() << endl;
    }
    initDisplayList ();

}


//添加事件名称到todolist
void Widget::addNote(QString s)
{
    //initDataBase (ui->calendar->selectedDate ());
    dataBase->mytodolist->push_back(s);
    initDisplayList ();
}

//添加事件详细信息到myEvent
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

//全部删除
void Widget::on_clearButton_clicked()
{
    ui->displayList->clear ();
    dataBase->myEventList = new QVector<myEvent>;
    dataBase->mytodolist = new QVector<QString>;

}

//删除
void Widget::on_deleteButton_clicked()
{ 
   //qDebug() << "index:" << index << endl;
   if(index > -1)
   {
    //qDebug() << "XXXXXXX " << ui->displayList->takeItem(index) << endl;

    ui->displayList->takeItem(index);
    dataBase->myEventList->remove(index);
    dataBase->mytodolist->remove (index);
    ui->deleteButton->setEnabled (false);
    ui->editButton->setEnabled (false);
   }
    index = -1;
}

//启动删除和编辑
void Widget::on_displayList_itemActivated(QListWidgetItem *item)
{
    ui->deleteButton->setEnabled (true);
    ui->editButton->setEnabled (true);
    index = ui->displayList->row(item);
     //qDebug() << "index:" << index << endl;
}

//编辑
void Widget::on_editButton_clicked()
{
    //qDebug() << "index:" << index << endl;
    note = new noteDialog();
    myEvent *tempEvent = new myEvent(dataBase->myEventList->at (index));
    note->initNoteDialog(tempEvent);
    //qDebug() << "event*******" << tempEvent->getEventName () << endl;
    connect (note, SIGNAL(pass(QString)), this,SLOT(addNote(QString)));
    connect (note, SIGNAL(passDetail(myEvent)),this, SLOT(addEvent(myEvent)));
    if(note->exec() == QDialog::Accepted)
    {
      dataBase->myEventList->takeAt(index).getEventName ();
      dataBase->mytodolist->takeAt (index);
      initDisplayList ();
    }

    ui->deleteButton->setEnabled (false);
    ui->editButton->setEnabled (false);
}
