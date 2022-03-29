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