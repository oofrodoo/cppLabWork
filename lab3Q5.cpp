#include <iostream>
using namespace std;

const int LIMIT = 100;

class IntArray
{
private:
    int arr[LIMIT];

public:
    int &operator[](int n)
    { // return by reference
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    IntArray ia;

    for (int j = 0; j < LIMIT; j++)
        ia[j] = j * 10;

    for (int j = 0; j < LIMIT; j++)
    {
        int temp = ia[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}