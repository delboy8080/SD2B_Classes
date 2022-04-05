//
// Created by floodd on 29/03/2022.
//
#include "ClockType.h"

ClockType::ClockType(int hrs, int mins, int sec)
{
    this->hrs = hrs;
    this->mins = mins;
    this->sec = sec;
}
string ClockType::getCurrentTime( )
{
    string res;
    res = to_string(hrs)+":"+to_string(mins)+
            ":"+to_string(sec);
    return res;
}

void ClockType::incrementSecondsBy(int n)
{
    this->sec += n;
    if(this->sec >=60)
    {
        this->incrementMinutesBy(this->sec/60);
        this->sec %= 60 ;
    }
}
void ClockType::incrementMinutesBy(int n)
{
    this->mins += n;
    if(this->mins >=60)
    {
        this->incrementHoursBy(this->mins/60);
        this->mins %=60;
    }
}
void ClockType::incrementHoursBy(int n)
{
    this->hrs =(this->hrs + n)%24;
}
void  ClockType::displayCurrentTime()
{
    cout << getCurrentTime() <<endl;
}
int ClockType::remainingTime()
{
    return (24*3600)-elapsedTime();
}
void ClockType::outputDifference
(ClockType &ct)
{
    int diff = abs(elapsedTime()
            -ct.elapsedTime());
    int h = diff / 3600;
    int m = (diff%3600)/60;
    int s = diff%60;
    cout << h<<":"<<m<<":"<<s<<endl;
}
int ClockType::elapsedTime()
{
    return (hrs * 3600) + (mins*60)+sec;
}
void ClockType::reset()
{
    hrs = mins = sec = 0;
}
void ClockType::setTime(int hh, int mm, int ss )
{
    this->hrs = hh;
    this->mins = mm;
    this->sec =ss;
}
