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
}
Widget::~Widget()
{
    delete ui;
}
//拖拽
void Widget::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("text/uri-list"))
    {
        event->acceptProposedAction();
    }
}
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
    for (int i = 0; i < dataBase->mytodolist->count(); i++)
    {
        ui->displayList->addItem (dataBase->mytodolist->at (i));
    }
}
//判断该循环事件在所选日期会不会发生
bool Widget::setRepeat(myEvent repeatEvent)
{
    //如果该循环事件是从当前日期开始，那么已经显示，不必再次显示了
    if(repeatEvent.date == dataBase->mydate)
        return false;
    QString signal = repeatEvent.getRepeat ();
    if(signal == tr("nly")) return false;
}
//初始化database;
void Widget::initDataBase(const QDate &mydate)
{
    //qDebug() << filePath << endl;
    dataBase = new myDataBase(mydate);
    dataBase->readData ();
    dataBase->readRepeat ();
}

//保存dataBase
void Widget::saveDataBase()
{
    dataBase->writeData ();
    dataBase->writeRepeat ();
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
        initDataBase(date);
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
