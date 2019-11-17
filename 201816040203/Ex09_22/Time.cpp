#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Time.h"  //include definition of class Time from Time.h

using namespace std;

//Time constructor
Time::Time(  int h, int m, int s )
{
    setTime( h, m, s );
} // end


Time &Time::setTime( int h, int m, int s )
{

    if( (h >=0 && h <=23) && (m >=0 && m <=59) && (s >=0 && s <=59) )
    {
        Alltime= 3600*h + 60*m + s;
    }
    else
        cout<<"error"<<endl;
    return *this;
}

Time &Time::setHour(int h)
{
    //If hour is in range,convert time to total seconds
    if( h >= 0 && h <=23)
        Alltime = ( 3600*h + getMinute()*60 + getSecond());
    else
        cout<<"error"<<endl;
    return *this;
}

Time &Time::setMinute(int m)
{
    //If minute is in range,convert time to total seconds
    if( m >= 0 && m <=59)
        Alltime = ( getHour()*3600 + m*60 + getSecond());
    else
        cout<<"error"<<endl;
    return *this;
}

Time &Time::setSecond(int s)
{
    //If second is in range,convert time to total seconds
    if( s >= 0 && s <=59)
        Alltime = ( getHour()*3600 + getMinute()*60 + s );
    else
        cout<<"error"<<endl;
    return *this;
}

int Time::getHour()
{
    return Alltime/3600%24; // function to retrieve the hour
}

int Time::getMinute()
{
    return Alltime%3600/60;  // function to retrieve the minute
}

int Time::getSecond()
{
    return Alltime%3600%60;  // function to retrieve the second
}

void Time::printUniversal()
{
    //print universal time
    cout<<getHour()<<":"<<getMinute()<<":"<<getSecond();
}

void Time::printStandard()
{
    //print standard time
    cout<<(( getHour()==0 || getHour()==12 ) ? 12 : getHour()%12) <<":"
        <<getMinute()<<":"<<getSecond()<<( getHour()<12 ?" AM":" PM");
}

void Time::tick()
{
    // total seconds plus one
    Alltime++;
}
