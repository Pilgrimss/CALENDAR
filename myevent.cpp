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
