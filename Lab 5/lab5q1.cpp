/*
1. Write a C++ program that demonstrates the use of virtual functions. Create a base class Shape with a member function area() that is declared as a virtual function. Derive two classes, Rectangle and Circle, from the Shape class. Override the area() function in both derived classes to calculate and return the area of the rectangle and the circle, respectively.
In the main function, create pointers of type Shape* and assign them to objects of Rectangle and Circle. Use the base class pointer to call the overridden area() function and display the areas of both shapes.*/

#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14

class Shape
{
public:
    virtual float areaRectangle()
    {
        return 0;
    }
    virtual float areaCircle()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    void getMeasurements()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    float areaRectangle() override
    {
        return length * breadth;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void getMeasurements()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    float areaCircle() override
    {
        return pi * pow(radius, 2);
    }
};

int main()
{
    Shape *ptr;
    Rectangle r;
    Circle c;
    r.getMeasurements();
    ptr = &r;
    cout << "The area of rectangle is: " << ptr->areaRectangle() << endl;

    c.getMeasurements();
    ptr = &c;
    cout << "The area of circle is: " << ptr->areaCircle() << endl;

    return 0;
}
