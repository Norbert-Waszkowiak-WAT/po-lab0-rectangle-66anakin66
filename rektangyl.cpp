#include <iostream>
using namspace std;

class Rectangle{
    private:
        double width, height;
    public:
        Rectangle(double w, double h)
            : width(w), height(h) {}
        void setWidth(double w){
            width = w;
        }
        void seHeight(double h){
            height = h;
        }
        double getWidth const(){
            return width;
        }
        double getHeight const(){
            return Height;
        }
        double area const(){
            return width * height;
        }
        double perimiter const(){
            return 2 * (width + height);
        }
        void dispaly const(){
            cout<<"Rectangle: "<<width<<" x "<<height<<endl;
            cout<<"Area: "<<area()<<endl;
            cout<<"Perimeter: "<<perimeter()<<endl;

        }

}: