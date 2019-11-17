#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"

using namespace std;
class Rectangle
{
public:
    Rectangle(double , double );
    void setlength(double);
    double getlength();
    void setwidth(double);
    double getwidth();
    double Perimeter();
    double Area();
private:
    double length;
    double width;
};
#endif
