#ifndef DATABASE_H
#define DATABASE_H

#include "myevent.h"
#include "QVector"
#include "QString"
#include "QDate"
#include "QFile"
#include "QTextStream"
#include <QDebug>
#include <QFileInfo>
#include <QDir>
class myDataBase
{
public:
    myDataBase(const QDate &mydate);
    myDataBase(){};
    void readBase(QFile*, QVector<myEvent>*, QVector<QString>*);
    void readData();
    void readRepeat();

    void writeBase(QFile*, QVector<myEvent>*, QVector<QString>*);
    void writeData();
    void writeRepeat();

    QString filename;
    QVector <myEvent>* myEventList;
    QVector <QString>* mytodolist;
    QDate mydate;
    QVector <myEvent> * repeatEventList;//存循环事件细节列表
    QVector <QString>* repeatToDoList;//存循环事件列表
 };

#endif // DATABASE_H
