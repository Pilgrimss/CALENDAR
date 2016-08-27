#include "myevent.h"

myEvent::myEvent(const myEvent *temp):
    eventName(temp->getEventName()),
    startTime(temp->getStartTime ()),
    endTime(temp->getEndTime ()),
    locate(temp->getLocate ()),
    repeat(temp->getRepeat ()),
    color(temp->getColor ())
{

}

bool myEvent::operator == (const myEvent temp)
{
    if (eventName != temp.getEventName ()) return false;
    if (startTime != temp.getStartTime ()) return false;
    if (endTime != temp.getEventName ()) return false;
    if (locate != temp.getLocate ()) return false;
    if (repeat != temp.getRepeat ()) return false;
    if (color != temp.getColor ()) return false;
    return true;
}

QString eventName;
QString startTime;
QString endTime;
QString locate;
QString repeat;
QString color;
