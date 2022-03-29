//
// Created by floodd on 29/03/2022.
//

#ifndef SD2B_CLASSES_CLOCKTYPE_H
#define SD2B_CLASSES_CLOCKTYPE_H
#include <iostream>
using namespace std;
class ClockType
{
    int hrs;
    int mins;
    int sec;
public:

    ClockType(int hrs=0, int mins=0, int sec=0);
    void incrementSecondsBy(int n);
    void incrementMinutesBy(int n);
    void incrementHoursBy(int n);

    string getCurrentTime( );


};
#endif //SD2B_CLASSES_CLOCKTYPE_H
