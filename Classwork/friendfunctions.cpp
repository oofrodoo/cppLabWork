// Friend class
/*
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    Distance(float fltfeet)
    {
        feet = static_cast<int>(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
    Distance operator+(Distance);
};
Distance Distance::operator+(Distance d2)
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
    {
        i = 12.0;
        f++;
    }
    return Distance(f, i);
}

int main()
{
    Distance d1 = 2.5;
    Distance d2 = 1.25;
    Distance d3;
    cout << "\nD1 = ";
    d1.showdist();
    cout << "\nD2 = ";
    d2.showdist();
    d3 = d1 + 10.0;
    cout << "\n D3 = ";
    d3.showdist();
    cout << endl;
    return 0;
}
*/
// Friend functions
/*
#include <iostream>
using namespace std;
class alpha
{
private:
    int data1;

public:
    alpha() : data1(99) {}
    friend class beta;
};

class beta
{
public:
    void func1(alpha a) { cout << "\nData1 = " << a.data1; }
    void func2(alpha a) { cout << "\nData2 = " << a.data1; }
};

int main()
{
    alpha a;
    beta b;

    b.func1(a);
    b.func2(a);
    cout << endl;
    return 0;
    return 0;
}
*/
// Static functions
// Static functions and ID numbers for objects
#include <iostream>
using namespace std;

class gamma
{
private:
    static int total;
    int id;

public:
    gamma()
    {
        total++;
        id = total;
    }

    ~gamma()
    {
        total--;
        cout << "Destroying ID number " << id << endl;
    }

    static void showtotal()
    {
        cout << "Total is " << total << endl;
    }

    void showid()
    {
        cout << "ID number is " << id << endl;
    }
};

int gamma::total = 0;

int main()
{
    gamma g1;
    gamma::showtotal();

    gamma g2, g3;
    gamma::showtotal();

    g1.showid();
    g2.showid();
    g3.showid();

    cout << "------ End of program ------\n";
    return 0;
}
