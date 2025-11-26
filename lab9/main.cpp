#include <iostream>
using namespace std;
class Shape {
protected:
    double x, y;
public:
    Shape() : x(0), y(0) {}
    void get_data(double a, double b) {
        x = a;
        y = b;
    }
 virtual void display_area() {
        cout << "this is base class display_area()" << endl;
    }
};
class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * x * y;
        cout << "Area of Triangle: " << area << endl;
    }
};
class Rectangle : public Shape {
public:
    void display_area() override {
        double area = x * y;
        cout << "Area of Rectangle: " << area << endl;
    }
};
int main() {
    Shape* shapePtr;
    Rectangle rect;
    shapePtr =&rect;
    shapePtr ->get_data(10,5);
    shapePtr ->display_area();
    Triangle tri;
    shapePtr =&tri;
    shapePtr ->get_data(10,5);
    shapePtr ->display_area();
    return 0;
}
