#ifndef DISPLAYLISTWIDGET_H
#define DISPLAYLISTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QListWidget>
#include <QMouseEvent>
#include <QApplication>
#include <QMimeData>
#include <QDrag>
#include <QPoint>
class DisplayListWidget : public QListWidget
{
    Q_OBJECT
public:
    DisplayListWidget(QWidget *parent = 0);
    //DisplayListWidget();
    //~DisplayListWidget();
/*
protected:
    /void mousePressEvent(QMouseEvent *event);
    /void mouseMoveEvent(QMouseEvent *event);
    /void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);

private:
    void PerformDrag();
    QPoint startPos;
    QPoint endPos;
    QMimeData* mimeData;
*/
};

#endif // DISPLAYLISTWIDGET_H
