#include <iostream>
using namespace std;

class Distance {
private:
    int km;
    int m;

public:
    // Constructor
    Distance(int kilometer = 0, int meter = 0) {
        km = kilometer;
        m = meter;
    }
    Distance operator - (Distance d) {
        int total1 = km * 1000 + m;
        int total2 = d.km * 1000 + d.m;
        int diff = total1 - total2;

        // Handle negative difference
        if (diff < 0)
            diff = -diff;

        int new_km = diff / 1000;
        int new_m = diff % 1000;

        return Distance(new_km, new_m);
    }

    void print(){
        cout << km << " km " << m << " m "<<endl;
    }

};

int main (){
    Distance d1(5,300);
    Distance d2(3,800);

    Distance d3;
    d3 = d1 - d2;

    cout<< "Difference between two distances is: ";
    d3.print();
    return 0;
}