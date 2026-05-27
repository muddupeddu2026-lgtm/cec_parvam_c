#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double l, double w);
    void setdimensions(double l, double w);
    double Area();
    double getPerimeter();
    void display();a
};

#endif // RECTANGLE_H
#include "rectangle.h"
#include<iostream.h>
using namespace  std;

rectangle::rectangle() {
    length=0;
    width=0;
    
}
rectangle::rectangle(double i, double w ) {
    length=l;
    width=w;
    
}
void rectangle::setdimensions(double l, double w ) {
    length=l;
    width=w;
}
double rectangle::area() {
    return length * width;
}
double rectangle::perimeter() {
    return 2* (length+width);
}

void rectangle:: display() {
    cout<<"rectangle:"<<length<<"x"<<width<<endl;
    cout<<"area:"<<area()<<",perimeter:"<<perimeter()<<endl;
}    
    

