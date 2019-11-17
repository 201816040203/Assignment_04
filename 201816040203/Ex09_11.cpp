#include<iostream>
#include<stdexcept>
#include"Rectangle.h"

using namespace std;

int main()
{
    double l, w;
    cin >> l>>w;
   Rectangle rectangle(l,w);
   cout<<"the perimeter is:  "<<rectangle.Perimeter(l,w)<<endl;
   cout<<"the Area is :  "<<rectangle.Area(l,w)<<endl;
    return 0;
}
