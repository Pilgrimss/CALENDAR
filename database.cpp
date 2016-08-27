#include "database.h"
#include <QDir>
#include <QFileInfo>
#include <QFile>

myDataBase::myDataBase(const QDate &date)
    :mydate(date)
{

}

void myDataBase::readBase(QFile* file, QVector<myEvent>* eventList, QVector<QString>* todoList)
{
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text))
            qDebug()<<"Can't open the file!"<<endl;
    qDebug() << "&&&&&&" << file <<"&&&&&" <<  endl;
    myEvent tempEvent = new myEvent();
    QTextStream in(file);
    QString data = in.readLine();
    while(!in.atEnd ())
    {
        for(int index = 0;data != "interval" && !in.atEnd(); index++)
        {

            switch(index % 6)
            {
                case 0:
                tempEvent.setEventName (data);
                break;
                case 1:
                tempEvent.setStartTime (data);
                break;
                case 2:
                tempEvent.setEndTime (data);
                break;
                case 3:
                tempEvent.setLocate (data);
                break;
                case 4:
                tempEvent.setRepeat (data);
                break;
                default:
                {
                    tempEvent.setColor (data);
                    eventList->push_back (tempEvent);
                    myEvent tempEvent = new myEvent();
                 }
            }
            data = in.readLine ();
        }
        while(!in.atEnd ())
        {
         data = in.readLine ();
         todoList->push_back (data);
        }
    }
    file->close ();
}

void myDataBase::readData()
{
    QString filename = QString::number(mydate.year()) + QString::number(mydate.month()) + QString::number(mydate.day ());
    QFile *file = new QFile(filename);
    qDebug() << filename << endl;
    myEventList = new QVector<myEvent>();
    mytodolist = new QVector<QString>();
    readBase (file,myEventList,mytodolist);
}


void myDataBase::readRepeat()
{
    QFile *file = new QFile("repeatFile");
    repeatEventList = new QVector<myEvent>();
    repeatToDoList = new QVector<QString>();
    readBase (file,repeatEventList,repeatToDoList);
}


void myDataBase::writeBase(QFile* file, QVector<myEvent>* eventList, QVector<QString>* todoList)
{      
    if(!file->open( QIODevice::ReadWrite| QIODevice::Text))
       qDebug() << "can't write" << endl;
    QTextStream out(file);
    if(eventList->isEmpty ())
    {
        return;
    }
    //QTextStream out(file);
    for(int i = 0; i < eventList->size ();i++)
    {
        out<<eventList->at(i).getEventName ()<<endl;
        out<<eventList->at(i).getStartTime ()<<endl;
        out<<eventList->at(i).getEndTime ()<<endl;
        out<<eventList->at(i).getLocate ()<<endl;
        out<<eventList->at(i).getRepeat ()<<endl;
        out<<eventList->at(i).getColor ()<<endl;
    }
    out <<"interval"<<endl;
    for(int i = 0; i < todoList->size (); i++)
        out << todoList->at (i) << endl;
    out.flush();
    file->close();
}

void myDataBase::writeData()
{
    QString filePath = QString::number(mydate.year()) + QString::number(mydate.month()) + QString::number(mydate.day ());
    QFile* file = new QFile(filePath);
    file->remove ();
    if(!file->open( QIODevice::ReadWrite))
       qDebug() << "can't write" << endl;
    writeBase (file,myEventList,mytodolist);
}
void myDataBase::writeRepeat()
{
    QFile* file = new QFile("repeatFile");
    file->remove ();
    writeBase (file,repeatEventList,repeatToDoList);
}
