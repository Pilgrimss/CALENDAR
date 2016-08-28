#include "widget.h"
#include <QApplication>
#include <QTranslator>
#include <fstream>
#include <qDebug>
#include <QDir>

int lan_config = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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

    Widget w;
    w.setWindowOpacity(0.8);
    //w.setWindowFlags(Qt::FramelessWindowHint|Qt::Window);
    w.show();
    int ret = a.exec();
    if (ret == 773)
    {
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
        return 0;
    }
    return ret;
    //return a.exec();
}
