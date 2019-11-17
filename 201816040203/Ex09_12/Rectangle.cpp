#include <iostream>
using namespace std;
#include "math.h"
#include "Rectangle.h"

#include "Point.h"

Rectangle::Rectangle(double a, double b)
 {
     setlength(a);
 }
void Rectangle:: setlength(double a)
{
    if(a>=0.0&&a<=20.0)
        length=a;
    else
        cout<<"error"<<endl;
}
double Rectangle:: getlength()
{
    return length;
}

void Rectangle:: setwidth(double a)
{
    if(a>=0.0&&a<=20.0)
        width=a;
    else
        cout<<"error"<<endl;
}
double Rectangle:: getwidth()
{
    return width;
}
double Rectangle:: Perimeter()//周长
{
    return 2*length+2*width;
}
double Rectangle:: Area()//面积
{
    return length*width;
}
