// #include <iostream>
// using namespace std;

// class Distance {
// private:
//     int feet;
//     float inches;

// public:
//     // Default constructor
//     Distance() : feet(0), inches(0.0) {}
    
//     // Parameterized constructor
//     Distance(int ft, float in) : feet(ft), inches(in) {}

//     void getdist() {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }

//     void showdist() const {
//         cout << feet << "\'-" << inches << '\"';
//     }

//     bool operator<(const Distance& d2) const;  // Changed parameter to const reference
// };

// bool Distance::operator<(const Distance& d2) const {
//     float bf1 = feet + inches/12.0f;  // Added .0f for float division
//     float bf2 = d2.feet + d2.inches/12.0f;
//     return (bf1 < bf2);  // Simplified return statement
// }
// int main() {
//     Distance dist1;
//     dist1.getdist();

//     Distance dist2(6, 2.5);

//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();

//     if (dist1 < dist2) {
//         cout << "\nDist1 is less than dist2" << endl;  // Fixed logic error in message
//     } else {
//         cout << "\nDist1 is greater than (or equal to) dist2" << endl;
//     }
    
//     return 0;
// }


// enum str (sz = 80) is used so that it's value remains constant throught the code.
// static const -> also makes it const and static treats it like a global variable.



/*
#include <iostream>
#include <string.h>

using namespace std;

// user-defined string type
class String {
private:
    enum { SZ = 80 }; // size of String objects
    char str[SZ];     // holds a string

public:
    // constructor, no args
    String() {
        strcpy(str, "");
    }

    // constructor, one arg
    String(char s[]) {
        strcpy(str, s);
    }

    // display a String
    void display() const {
        cout << str;
    }

    // read a string
    void getstr() {
        cin.get(str, SZ);
    }

    // check for equality
    bool operator==(String ss) const {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};

int main() {
    String s1 = "yes";
    String s2 = "no";
    String s3;

    cout << "Enter 'yes' or 'no': ";
    s3.getstr(); // get String from user

    // compare with "yes"
    if (s3 == s1)
        cout << "You typed yes!\n";
    // compare with "no"
    else if (s3 == s2)
        cout << "You typed no!\n";
    else
        cout << "You didn't follow instructions!\n";

    return 0;
}
*/




#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 100;

class safearray {
private:
    int arr[LIMIT]; // Array to store integers

public:
    int& operator[](int n) { // Overloaded subscript operator, returns by reference
        if (n < 0 || n >= LIMIT) {
            cout << "Index out of bounds"; exit(1); // Error handling for out-of-bounds access
        }
        return arr[n]; // Return the element at index n
    }
};

int main() {
    safearray sa1; // Create an instance of safearray

    // Insert elements (left side of equal sign)
    for (int j = 0; j < LIMIT; j++)
        sa1[j] = j * 10; // Assign values to array elements

    // Display elements (right side of equal sign)
    for (int j = 0; j < LIMIT; j++) {
        int temp = sa1[j]; // Access element
        cout << "Element " << j << " = " << temp << endl;
    }

    return 0;
}