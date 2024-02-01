/*1. WAP that defines a shape class with a constructor that gives value to width and height.
 The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
 In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/

#include<iostream>
using namespace std;
class Shape {
public:
    int width;
    int height;
	Shape() {
        cout<<"Enter Width for your Shape: ";
        cin>>this->width;
        cout<<"Enter Height for your Shape: ";
        cin>>this->height;
    }
};

class Triangle : public Shape {
public:
    void Tri(){
        int area =(this->width * this->height)/2;
        cout<<"The Area of Triangle is "<<area<<endl;
    }
};
class Rectangle : public Shape{
public:
    void Rect(){
        int area =this->width * this->height;
        cout<<"The Area of Rectangle is "<<area<<endl;
    }
};

int main() {
    Rectangle r;  
    Triangle t;  
    r.Rect();
    t.Tri();
    return 0;
}
