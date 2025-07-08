#include <iostream>
using namespace std;

class Counter
{
private:
    int count;

public:
    Counter() : count(0) {}      // Default constructor
    Counter(int c) : count(c) {} // Parameterized constructor

    int get_count() const { return count; }

    // pre decrement
    Counter operator--()
    {
        return Counter(--count);
    }
    // post decrement
    Counter operator--(int)
    {
        return Counter(count--);
    }
};

int main()
{
    Counter c1, c2;

    cout << "Initial values:" << endl;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;

    --c1;
    c2 = --c1;

    cout << "\nAfter pre-decrement:" << endl;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;

    c2 = c1--;

    cout << "\nAfter post-decrement:" << endl;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;

    return 0;
}