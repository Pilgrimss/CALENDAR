#ifndef DISPLAYLISTWIDGET_H
#define DISPLAYLISTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QListWidget>
#include <QMimeData>
#include <QPoint>
#include <QMouseEvent>
#include <QApplication>
#include <QDrag>
#include <QDir>
#include<QDebug>
class DisplayListWidget:public QListWidget
{
    Q_OBJECT
public:
    DisplayListWidget(QWidget *parent = 0);
    ~DisplayListWidget();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    void PerformDrag();
    QPoint startPos;
    QPoint endPos;
    QMimeData* mimeData;
};

#endif // DISPLAYLISTWIDGET_H
