#include <iostream>
using namespace std;

class STUDENT
{
protected:
    int rollno;
    char name[50];

public:
    void getdata()
    {
        cout << "Roll No: ";
        cin >> rollno;
        cin.ignore();
        cout << "Name   : ";
        cin.getline(name, 50);
    }
    void display()
    {
        cout << "Roll No: " << rollno << "\nName   : " << name << endl;
    }
};

class EXAM : public STUDENT
{
protected:
    float marks[6];

public:
    void getmarks()
    {
        getdata();
        cout << "Enter marks for 6 subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void showmarks()
    {
        cout << "Marks:\n";
        for (int i = 0; i < 6; i++)
            cout << "Sub " << i + 1 << ": " << marks[i] << endl;
    }
    float getTotal()
    {
        float sum = 0;
        for (int i = 0; i < 6; i++)
            sum += marks[i];
        return sum;
    }
};

class RESULT : public EXAM
{
    float total;

public:
    void compute()
    {
        getmarks();
        total = getTotal();
    }
    void display_result()
    {
        cout << "\nResult:\n";
        display();
        showmarks();
        cout << "Total: " << total << endl;
    }
};

int main()
{
    RESULT r;
    r.compute();
    r.display_result();
    return 0;
}
