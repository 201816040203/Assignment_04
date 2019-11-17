#include <iostream>
#include <ctime>
#include "Time.h"  //include definition of class Time from Time.h

using namespace std;

int main()
{
    Time time;


    time.setHour(23).setMinute(59).setSecond(59);
    time.printUniversal();
    cout<<endl;
    time.printStandard();

    time.tick();

    cout<<endl<<endl;
    time.printUniversal();
    cout<<endl;
    time.printStandard();
    return 0;
}
