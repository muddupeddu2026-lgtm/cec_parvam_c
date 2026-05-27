#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::Rectangle(double l, double w){
  lenght = l;
  width = w;
}
void rectangle::setDimension(double l, double w){
    lenght = l;
    width = w;
}
double rectangle::area(){
   return length * width;
}
double Rectangle::perimeter(){
    return 2 * (length + width);
}
void Rectangle::display(){
    cout <<"Rectangle: " <<" X " << width << endl;
    cout << "Area: " << area() <<",perimeter: " << perimeter() << endl;
}
#include "Rectangle.h"

int main(){
    Rectangle r1;
    Rectangle r2(5.0,3.0);
    
    r1.display();
    r2.display();
    
    r1.setDimension(4.5,2.5)
    r1.display();
    
    return 0;
}