//  Create a C++ program that has a base class, basic_info, with data members name, roll no, and sex, and two member functions, getdata and display. Derive a class physical_fit from the base class basic_info that has data members height and weight, as well as member functions getdata and display. Display all the information using an object of the derived class.

#include <iostream>
using namespace std;
class basic_info
{
protected:
    char name[50];
    int roll_no;
    char sex;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin.getline(name, 50);

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter sex (M/F): ";
        cin >> sex;
    }

    void display()
    {
        cout << "\nBasic Information\n";
        cout << "Name     : " << name << endl;
        cout << "Roll No  : " << roll_no << endl;
        cout << "Sex      : " << sex << endl;
    }
};

class physical_fit : public basic_info
{
private:
    float height;
    float weight;

public:
    void getdata()
    {
        basic_info::getdata(); // Reuse base class input

        cout << "Enter height (in cm): ";
        cin >> height;
        cout << "Enter weight (in kg): ";
        cin >> weight;
    }

    void display()
    {
        basic_info::display();
        cout << "\nPhysical Fitness\n";
        cout << "Height   : " << height << " cm" << endl;
        cout << "Weight   : " << weight << " kg" << endl;
    }
};

int main()
{
    physical_fit person;

    cout << "Enter details of the person:\n";
    person.getdata();

    cout << "\nDisplaying all information:\n";
    person.display();

    return 0;
}
