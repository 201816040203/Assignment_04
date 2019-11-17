#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time( int, int, int );
    Time();

    Time &setTime( int, int, int );
    Time &setHour(int );
    Time &setMinute(int );
    Time &setSecond(int );
    int getHour();
    int getMinute();
    int getSecond();
    void printUniversal();
    void printStandard();

    void tick();
private:
    int Alltime;
}; // end class Time

#endif
