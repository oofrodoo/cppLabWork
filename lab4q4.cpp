/*
4. Using C++, create a base class called SHAPE. Use this class to store two double-type
values. Derive two specific classes called TRIANGLE and RECTANGLE from the base class.
Add to the base class a member function getdata to inialise base class data members and another member function display to compute and display the area of shapes. Make display a virtual function and redefine this function in the derived classes to suit their requirements. Using these three classes, design a program that will accept the dimensions of a TRIANGLE or RECTANGLE interactively and display the area.
*/
#include <iostream>
using namespace std;

class SHAPE
{
protected:
    double dim1, dim2;

public:
    void getdata()
    {
        cout << "Enter values: ";
        cin >> dim1 >> dim2;
    }

    virtual void display()
    {
        cout << "Area: N/A" << endl;
    }
};

class TRIANGLE : public SHAPE
{
public:
    void display() override
    {
        cout << "Triangle Area: " << 0.5 * dim1 * dim2 << endl;
    }
};

class RECTANGLE : public SHAPE
{
public:
    void display() override
    {
        cout << "Rectangle Area: " << dim1 * dim2 << endl;
    }
};

int main()
{
    SHAPE *ptr;
    char ch;

    cout << "T or R: ";
    cin >> ch;

    if (ch == 'T' || ch == 't')
        ptr = new TRIANGLE;
    else if (ch == 'R' || ch == 'r')
        ptr = new RECTANGLE;
    else
        return 0;

    ptr->getdata();
    ptr->display();

    delete ptr;
    return 0;
}
