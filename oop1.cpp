/* 
#include <iostream>
using namespace std;

int main()
{
    void intrfac(float, float&, float&); 
    float number, intpart, fracpart;     

    do {
        cout << "\nEnter a real number: "<<endl;
        cin >> number;
        intrfac(number, intpart, fracpart);
        cout << "Integer part is " << intpart<<endl;
        cout << "Fraction part is " << fracpart << endl;
    } while (number != 0.0);

    return 0;
}
void intrfac(float n, float& intp, float& fracp)
{
    long temp = static_cast<long>(n);     
    intp = static_cast<float>(temp);      
    fracp = n - intp;                     
}
*/

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    void order(int&, int&);
    int n1 = 99, n2 = 11;  
    int n3 = 22, n4 = 88;  

    order(n1, n2);         
    order(n3, n4);

    cout << "n1= " << n1 << endl;
    cout << "n2= " << n2 << endl;
    cout << "n3= " << n3 << endl;
    cout << "n4= " << n4 << endl;

    return 0;
}

void order(int& a, int& b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}
*/

/*
#include <iostream>
using namespace std;
int x;
int& setx();
int main (){
    setx() = 92;
    cout << "x= " << x << endl;
    return 0;

}

int& setx()
{
    return x;
}
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    
public:
    // Constructor
    Student(string n, int i) {
        cout << "Constructor called" << endl;
        name = n;
        id = i;
    }
    
    // Default constructor
    Student() {
        cout << "Default constructor called" << endl;
        name = "Unknown";
        id = 0;
    }
    
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    
    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    // Function to modify student data
    void updateInfo(string n, int i) {
        name = n;
        id = i;
    }
};

// Function taking object by value (creates a copy)
void displayStudent(Student s) {
    s.display();
}

// Function taking object by reference (no copy created)
void modifyStudent(Student& s) {
    s.updateInfo("Modified", 999);
}

int main() {
    Student s1("John", 101);   
    Student s2;          
    
    cout << "\nOriginal students:" << endl;
    s1.display();
    s2.display();
    
    cout << "\nPassing by value:" << endl;
    displayStudent(s1);  // Creates a copy
    
    cout << "\nPassing by reference:" << endl;
    modifyStudent(s2);   // Modifies original object
    s2.display();
    
    return 0;
}