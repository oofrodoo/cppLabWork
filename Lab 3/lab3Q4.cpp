#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers;
    float meters;

public:
    Distance() : kilometers(0), meters(0.0) {}
    Distance(int km, float m) : kilometers(km), meters(m) {} // Parameterized constructor

    void getdist()
    {
        cout << "\nEnter kilometers: ";
        cin >> kilometers;
        cout << "Enter meters: ";
        cin >> meters;
    }

    void showdist() const
    {
        cout << kilometers << " km " << meters << " m";
    }

    Distance operator+(Distance d2) const
    {
        int km = kilometers + d2.kilometers;
        float m = meters + d2.meters;

        if (m >= 1000.0)
        {
            m -= 1000.0;
            km += 1;
        }

        return Distance(km, m);
    }

    Distance operator-(Distance d2) const
    {
        int km = kilometers - d2.kilometers;
        float m = meters - d2.meters;

        if (m < 0.0)
        {
            m += 1000.0;
            km -= 1;
        }

        return Distance(km, m);
    }

    bool operator==(Distance d2) const
    {
        return (kilometers == d2.kilometers && meters == d2.meters);
    }
};

int main()
{
    Distance d1, d3, d4;
    d1.getdist();

    Distance d2(1, 350);

    d3 = d1 + d2;
    d4 = d1 - d2;

    cout << "\nd1 = ";
    d1.showdist();
    cout << "\nd2 = ";
    d2.showdist();
    cout << "\nd1 + d2 = ";
    d3.showdist();
    cout << "\nd1 - d2 = ";
    d4.showdist();

    if (d1 == d2)
        cout << "\n\nd1 & d2 are equal.\n";
    else
        cout << "\n\nd1 & d2 are not equal.\n";

    return 0;
}
