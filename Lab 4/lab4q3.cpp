/* 3.
Write a C++ program to model this relationship. Design three classes: STUDENT, EXAM and RESULT. The STUDENT class has data members such as rollno and name. Create a class EXAM by inheriting the STUDENT class. The EXAM class adds data members representing the marks scored in six subjects. Derive the RESULT from the EXAM class, which has its data members, such as total marks.
*/

#include <iostream>
using namespace std;

class STUDENT
{
protected:
    int rollno;
    string name;

public:
    void getdata()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
    }

    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name       : " << name << endl;
    }
};

class EXAM : public STUDENT
{
protected:
    float marks[6];

public:
    void getmarks()
    {
        getdata(); // from STUDENT
        cout << "Enter marks for 6 subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void showmarks()
    {
        cout << "Marks in 6 subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }

    float getTotal()
    {
        float sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
};

class RESULT : public EXAM
{
private:
    float total;

public:
    void compute_result()
    {
        getmarks();
        total = getTotal();
    }

    void display_result()
    {
        cout << "\nStudent Result\n";
        display();
        showmarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    RESULT r;

    r.compute_result();
    r.display_result();

    return 0;
}
