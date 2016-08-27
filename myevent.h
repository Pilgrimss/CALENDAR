#ifndef MYEVENT_H
#define MYEVENT_H

#include <QObject>
#include <QWidget>
#include <QString>
class myEvent
{

public:
    myEvent(const myEvent*temp);
    myEvent(){};

    //读取
    QString getEventName() const {return eventName;}
    QString getStartTime()const {return startTime;}
    QString getEndTime()const {return endTime;}
    QString getLocate()const {return locate;}
    QString getRepeat()const {return repeat;}
    QString getColor()const {return color;}

    //设置
    void setEventName(QString event){ eventName= event;}
    void setStartTime(QString start){ startTime=start;}
    void setEndTime(QString end){endTime=end;}
    void setLocate(QString l){locate = l;}
    void setRepeat(QString r){repeat =r;}
    void setColor(QString c){color = c;}

//private:
    QString eventName;
    QString startTime;
    QString endTime;
    QString locate;
    QString repeat;
    QString color;
};

#endif // MYEVENT_H
