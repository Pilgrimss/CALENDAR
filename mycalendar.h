#ifndef MYCALENDAR_H
#define MYCALENDAR_H

#include <QObject>
#include <QWidget>
#include <QCalendarWidget>
#include <qcolor>
#include <qdate>
#include <qpen>
#include <qbrush>
#include <QVector>
#include <notedialog.h>
#include <QPainter>
#include "myevent.h"
#include <QMap>

class myCalendar : public QCalendarWidget
{
    Q_OBJECT
public:
    myCalendar(QWidget *parent = 0);
    ~myCalendar();
    void setColor(QColor& color);//设置颜色
    QColor getColor();//得到颜色；
    const QDate getdate(){return m_selectedDate;}
    void setDate(QDate q){m_selectedDate = q; }
    QMap<QDate,QString> paintdates;//用来存放颜色改变的日期
signals:
    void passpainter(const QDate& date, const QTextCharFormat &format) const;
public slots:
    void setFormat(const QDate& date, const QTextCharFormat &format);
protected:
    virtual void paintCell(QPainter * painter, const QRect & rect, const QDate & date) const;
private:
    QDate m_selectedDate;//当前日期
    QPen m_outlinePen;
    QBrush m_transparentBrush;
};

#endif // MYCALENDAR_H
