#include <iostream>
using namespace std;
template <class atype>
int find(atype *array, atype value, int size)
{
    for (int j = 0; j < size; j++)
    {
        if (array[j] == value)
        {
            return j;
        }
    }
    return -1;
}

char chrArr[] = {'a', 'e', 'i', 'o', 'u', 'j'};
// char ch = 'e';
int intArr[] = {1, 3, 5, 9, 11, 13};
int in = 6;
long lonArr[] = {1L, 3l, 5l, 9l, 11l, 13l};
long lo = 11l;
double dubArr[]{1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
double db = 4.0;

int main()
{
    cout << "\n e in chrArray: index= " << find(chrArr, 'j', 6);
    cout << "\n 6 in intArray: index= " << find(intArr, in, 6);
    cout << "\n 11 in lonArray: index= " << find(lonArr, lo, 6);
    cout << "\n 4 in dubArray: index= " << find(dubArr, db, 6);
    cout << endl;
    return 0;
}