#include <iostream>
using namespace std;

class Distance {
private:
    int km;
    int m;

public:
    Distance() {
        km = 0;
        m = 0;
    }

    Distance(int k, int me) {
        km = k;
        m = me;
    }

    Distance operator - (Distance d) {
        int total1 = km * 1000 + m;
        int total2 = d.km * 1000 + d.m;
        int diff = total1 - total2;

        if (diff < 0)
            diff = -diff;

        int new_km = diff / 1000;
        int new_m = diff % 1000;

        return Distance(new_km, new_m);
    }

    void print() {
        cout << km << " kilometers and " << m << " meters" << endl;
    }
};

int main() {
    Distance dist1(5, 700);
    Distance dist2(3, 850);
    Distance dist3;

    dist3 = dist1 - dist2;

    cout << "Difference between two distances: ";
    dist3.print();

    return 0;
}
