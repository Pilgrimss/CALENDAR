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
class myDataBase
{
public:
    myDataBase(const QString file);
    myDataBase(){};
    void readData();
    void writeData();
    QString filename;
    QVector <myEvent>* myEventList;
    QVector <QString>* mytodolist;
    QDate mydate;
};

#endif // DATABASE_H
