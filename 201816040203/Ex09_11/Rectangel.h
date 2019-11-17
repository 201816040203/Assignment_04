#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
using namespace std;


class Rectangle
{
public:
    explicit Rectangle(double,double);  //default of constructor
    void setLength(double l);   //set length
    void setWidth(double w);    //set width
    double getLength() ;   //get length
    double getWidth() ;    //get width
    double Perimeter(double l,double w);  //calculate the perimeter
    double Area(double l,double w);        //calculate the area
private:
    double length;  //length of rectangle
    double width;   //width of rectangle
};
#endif
