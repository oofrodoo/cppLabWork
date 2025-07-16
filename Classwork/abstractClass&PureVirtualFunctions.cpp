// Abstract class pure virtual function 1:
/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show() = 0; // pure virtual function

};

class Derv1 : public Base
{
public:
    void show()
    {
        cout << "Derv1\n"
             << endl;
    }
};

class Derv2 : public Base
{
public:
    void show()
    {
        cout << "Derv2\n";
    }
};

int main()
{
    // Base bad;
    Base *arr[2];
    Derv1 dv1;
    Derv2 dv2;

    arr[0] = &dv1;
    arr[1] = &dv2;

    arr[0]->show();
    arr[1]->show();
    return 0;

    return 0;
}
*/

// long ahh code same thing
/*
#include <iostream>
using namespace std;

class Person
{
protected:
    char name[40];

public:
    void getName()
    {
        cout << "Enter a name: ";
        cin >> name;
    }

    void putName()
    {
        cout << "Name is: " << name << endl;
    }

    virtual void getData() = 0;       // pure virtual
    virtual bool isOutstanding() = 0; // pure virtual
};

class Student : public Person
{
private:
    float gpa;

public:
    void getData()
    {
        Person::getName();
        cout << "Enter student's GPA: ";
        cin >> gpa;
    }

    bool isOutstanding()
    {
        return gpa > 3.6;
    }
};

class Professor : public Person
{
private:
    int numPubs;

public:
    void getData()
    {
        Person::getName();
        cout << "Enter number of professor's publications: ";
        cin >> numPubs;
    }

    bool isOutstanding()
    {
        return numPubs > 100;
    }
};

int main()
{
    Person *persPTR[100];
    int n = 0;
    char choice;
    do
    {
        cout << "ENTER STUDENT OR PROFESSOR (S/P)" << endl;
        cin >> choice;
        if (choice == 'S')
        {
            persPTR[n] = new Student;
        }
        else
        {
            persPTR[n] = new Professor;
        }
        persPTR[n++]->getData();
        cout << " Enter another> (y/n)" << endl;
        cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++)
    {
        persPTR[j]->putName();
        if (persPTR[j]->isOutstanding())
        {
            cout << " This person is outstanding.";
        }
    }
    return 0;
}

*/

// friend function
/*
#include <iostream>
using namespace std;

class base
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // Friend function declaration
    friend void friendFunction(base &obj);
};

// friend function definition
void friendFunction(base &obj)
{
    cout << "Private Variable: "
         << obj.private_variable << endl;
    cout << "Protected Variable: "
         << obj.protected_variable;
}

int main()
{
    base object1;
    friendFunction(object1);
    return 0;
}
*/
