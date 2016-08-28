#include "widget.h"
#include <QApplication>
#include <QTranslator>
<<<<<<< HEAD
#include <fstream>
#include <qDebug>
#include <QDir>

int lan_config = 0;
=======
>>>>>>> origin/master

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
    QDir::setCurrent ("/Users/yingEos/Desktop/CALENDAR/");

    std::ifstream fin("./config.txt");
    while (fin >> lan_config);
    fin.close();

    QTranslator qt;
    if (lan_config)
    {
        qt.load(":/qm/testQtCreator_english.qm");
        qApp->installTranslator (&qt);
    }

=======
    //QTranslator qtTranslator;
    //qDebug() << qtTranslator.load(":/qm/testQtCreator_english.qm");
    //qApp->installTranslator(&qtTranslator);
>>>>>>> origin/master
    Widget w;
    w.setWindowOpacity(0.8);
    //w.setWindowFlags(Qt::FramelessWindowHint|Qt::Window);
    w.show();
<<<<<<< HEAD
    int ret = a.exec();
    if (ret == 773)
    {
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
        return 0;
    }
    return ret;
    //return a.exec();
=======
    return a.exec();
>>>>>>> origin/master
}
