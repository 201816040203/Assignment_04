#include <iostream>
#include <cctype> // isdigit function prototype
#include <cstring> // strlen function prototype
using namespace std;

#include "Rectangle.h" // Rectangle class definition
Rectangle::Rectangle(double Length,double Width)
{
    setLength(Length);
    setWidth(Width);
}

//function to set length of rectangle
void Rectangle::setLength(double l)
{
    if(l>0.0&&l<20.0)
        length=l;
    else
    {
        cout<<"ERROR"<<endl;//ÏÔÊ¾´íÎó
    }

}

//function to set width of rectangle
void Rectangle::setWidth(double w)
{
    if(w>0.0&&w<20.0)
        width=w;
    else
    {
        cout<<"ERROR"<<endl;//ÏÔÊ¾´íÎó
    }

}

//function to get length of rectangle
double Rectangle::getLength()
{
    return length;
}

//function to get width of rectangle
double Rectangle::getWidth()
{
    return width;
}

//function to calculate perimeter of rectangle
double Rectangle::Perimeter(double l,double w)
{
    return 2*l+2*w;
}

//function to calculate area of rectangle
double Rectangle::Area(double l,double w)
{
    return l*w;
}
