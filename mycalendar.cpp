#include "mycalendar.h"
#include <QtWidgets>
#include <QInputDialog>
#include <QTextCharFormat>
#include <QDebug>
#include <QtGlobal>

//构造函数
myCalendar::myCalendar(QWidget *parent):QCalendarWidget(parent)
{
     m_outlinePen.setColor(Qt::blue);//设置颜色为红色
     m_transparentBrush.setColor(Qt::transparent);//透明填充

}

myCalendar::~myCalendar()
{

}

//设置颜色

void myCalendar::setColor(QColor& color)
{
   m_outlinePen.setColor(color);
}

//获取颜色

QColor myCalendar::getColor()
{
   return (m_outlinePen.color());
}



//日历框输出

void myCalendar::paintCell(QPainter *painter, const QRect &rect, const QDate &date) const
{
   QCalendarWidget::paintCell(painter, rect, date);
    if(date == selectedDate ())
    {
          painter->setPen(m_outlinePen);
          painter->setBrush(m_transparentBrush);
          painter->drawRect(rect.adjusted(0, 0, -1, -1));
    }
}




