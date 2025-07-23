#include <iostream>
using namespace std;
template <class T>
T abs(T n)
{
    // return (n < 0) ? -n : n;
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}
int abs(int n)
{
    // return (n < 0) ? -n : n;
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main()
{
    int int1 = 5;
    int int2 = -6;
    long lon1 = 70000L;
    long lon2 = -80000L;
    double dub1 = 9.95;
    double dub2 = -10.15;

    cout << "\nabs integer: " << abs(int1) << endl;
    cout << "\nabs integer: " << abs(int2) << endl;
    cout << "\nabs long: " << abs(lon1) << endl;
    cout << "\nabs long: " << abs(lon2) << endl;
    cout << "\nabs long: " << abs(dub1) << endl;
    cout << "\nabs long: " << abs(dub2) << endl;
    return 0;
}
