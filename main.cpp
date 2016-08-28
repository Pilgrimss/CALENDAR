#include "widget.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTranslator qtTranslator;
    //qDebug() << qtTranslator.load(":/qm/testQtCreator_english.qm");
    //qApp->installTranslator(&qtTranslator);
    Widget w;
    w.setWindowOpacity(0.8);
    w.show();
    return a.exec();
}
