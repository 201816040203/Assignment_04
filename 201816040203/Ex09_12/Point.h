#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

using namespace std;
class Point
{
public:
    explicit Point(double ,double,double ,double ,double ,double ,double ,double );
    void setXY(double ,double ,double ,double ,double ,double ,double,double );
    //Point(double,double,double,double,double,double,double,double );
    void setPoint(double,double,double,double,double,double,double,double );
    Point getPoint();
    double Length(double ,double);
    double Width(double ,double );
    void square();
private:
    double x1,y1,x2,y2,x3,y3,x4,y4;
};
#endif
