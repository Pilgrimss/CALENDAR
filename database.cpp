#include "database.h"
#include <QDir>
#include <QFileInfo>
#include <QFile>

myDataBase::myDataBase(const QString file, const QDate &date)
    :filename(file),mydate(date)
{

}

void myDataBase::readData()
{

    QFile *file = new QFile(filename);
    myEventList = new QVector<myEvent>();
    mytodolist = new QVector<QString>();
    //无法打开文件，报错
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text))
        qDebug()<<"Can't open the file!"<<endl;
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
                myEventList->push_back (tempEvent);
                myEvent tempEvent = new myEvent();
            }
            }
            data = in.readLine ();
         }
        //data = in.readLine();
        while(!in.atEnd ())
        {
             data = in.readLine ();
             mytodolist->push_back (data);
        }
    }

    file->close ();
}
void myDataBase::writeData()
{      
    QString filePath = QString::number(mydate.year()) + QString::number(mydate.month()) + QString::number(mydate.day ());
    QFile* file = new QFile(filePath);

    if(!file->open( QIODevice::ReadWrite))
       qDebug() << "can't write" << endl;
    if(myEventList->isEmpty ())
    {
        qDebug() << "empty" << endl;
        return;
    }
    QTextStream out(file);
    for(int i = 0; i < myEventList->size ();i++)
    {
        out<<myEventList->at(i).getEventName ()<<endl;
        out<<myEventList->at(i).getStartTime ()<<endl;
        out<<myEventList->at(i).getEndTime ()<<endl;
        out<<myEventList->at(i).getLocate ()<<endl;
        out<<myEventList->at(i).getRepeat ()<<endl;
        out<<myEventList->at(i).getColor ()<<endl;
    }
    out <<"interval"<<endl;
    for(int i = 0; i < mytodolist->size (); i++)
        out << mytodolist->at (i) << endl;
    out.flush();
    file->close();
}
