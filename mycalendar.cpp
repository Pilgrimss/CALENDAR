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

void myCalendar::setFormat(const QDate& date, const QTextCharFormat &format)
{

    setDateTextFormat(date,format);
}

//日历框输出

void myCalendar::paintCell(QPainter *painter, const QRect &rect, const QDate &date) const
{
   QCalendarWidget::paintCell(painter, rect, date);
   QMap<QDate, QString>::const_iterator it = paintdates.constBegin();
   for (; it != paintdates.end(); it++ )
   {
       QBrush brush;
       qDebug() << it.value () << "12345678" << it.key();
       if(it.value()== tr("Red(Urgent)"))
       {
           qDebug() << "wo shi hong se";
               brush.setColor (Qt::red);
       }
       if(it.value() == tr("Blue(Life)"))
       {
               brush.setColor (Qt::blue);
       }
       if(it.value() == tr("Cyan(Work)"))
       {
               brush.setColor (Qt::cyan);
       }
       QTextCharFormat cf = this->dateTextFormat(it.key());
       if(cf.background ().color() == brush.color ())
           return;
       cf.setBackground(brush);
       painter->setPen(m_outlinePen);
       painter->setBrush(m_transparentBrush);
       painter->drawRect(rect.adjusted(0, 0, -1, -1));
       qDebug() << it.key() << endl;
       connect(this,SIGNAL(passpainter(const QDate &, const QTextCharFormat &)),this,SLOT(setFormat(const QDate& , const QTextCharFormat &)));
       emit passpainter(it.key (),cf);
       //setDateTextFormat(it.key(),cf);
   }
}




