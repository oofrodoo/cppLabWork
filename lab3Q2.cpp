#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers;
    float meters;

public:
    Distance() : kilometers(0), meters(0.0) {}
    Distance(int km, float m) : kilometers(km), meters(m) {}

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

    Distance operator-(Distance d2) const
    {
        int km = kilometers - d2.kilometers;
        float m = meters - d2.meters;

        if (m < 0.0)
        {                // meters negative bhayo bhane
            m += 1000.0; // 1km udhaar liney
            km -= 1;
        }

        return Distance(km, m);
    }
};

int main()
{
    Distance dist1, dist3;
    dist1.getdist();

    Distance dist2(3, 750.5);
    dist3 = dist1 - dist2;

    cout << "\ndist1 = ";
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist();
    cout << endl;
    cout << "dist3 = ";
    dist3.showdist();
    cout << endl;

    return 0;
}
