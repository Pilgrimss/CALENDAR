#include "database.h"

myDataBase::myDataBase(const QString file):filename(file)
{

}

void myDataBase::readData()
{
    QFile *file = new QFile(filename);
    myEventList = new QVector<myEvent>();
    mytodolist = new QVector<QString>();
    QFileInfo test(filename);
    if(test.exists())
        return;
    qDebug() << filename << endl;
    //QFile *file = new QFile(filename);
    //qDebug() << filename << endl;
    if(file->open(QIODevice::ReadWrite));

    //myEventList = new QVector<myEvent>();
    myEvent tempEvent = new myEvent();
    QString data = file->readLine ();
    while(data != "end")
    {
        for(int index = 0;data != "interval"; index++)
        {
            switch(index % 4)
            {
            case 0:
            tempEvent.setEventName (data);
            case 1:
            tempEvent.setStartTime (data);
            case 2:
            tempEvent.setEndTime (data);
            case 3:
                tempEvent.setLocate (data);
            case 4:
                tempEvent.setRepeat (data);
            case 5:
            {
                tempEvent.setColor (data);
                myEventList->push_back (tempEvent);
                myEvent tempEvent = new myEvent();
            }
            data = file->readLine ();
            }
         }
        data = file->readLine();
        //mytodolist = new QVector<QString>();
    }
    while(data != "end")
    {
         mytodolist->push_back (data);
         data = file->readLine ();
    }
    file->close ();
}
void myDataBase::writeData()
{
    QString filePath = QString::number(mydate.year()) + QString::number(mydate.month()) + QString::number(mydate.day ());
    QFile* file = new QFile(filePath);
    file->open( QIODevice::ReadWrite);
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
        out << mytodolist->at (i);
    out << "end" << endl;
    out.flush();
    file->close();
}
