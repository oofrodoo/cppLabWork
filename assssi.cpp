#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void findPairSum(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Found pair at indices: " << i << "," << j << endl;
                return;
            }
        }
    }
    cout << "No pair found that sums to " << target << endl;
}

int binarySearch(const vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1; 
}

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Operator overloading for addition (+)
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Operator overloading for multiplication (*)
    Complex operator*(const Complex& obj) {
        return Complex((real * obj.real - imag * obj.imag),
                      (real * obj.imag + imag * obj.real));
    }

    // Operator overloading for increment (++)
    Complex operator++() {
        ++real;
        return *this;
    }

    // Operator overloading for equality (==)
    bool operator==(const Complex& obj) {
        return (real == obj.real && imag == obj.imag);
    }

    // Friend function for output stream (<<)
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0)
            out << "+";
        out << c.imag << "i";
        return out;
    }
};

int main() {
    vector<int> arr = {12, 13, 14, 9, 2, 16, 11};
    int target;
    
    cout << "Enter target value: ";
    cin >> target;
    cout << "\nSearching for pair sum in original array:" << endl;
    findPairSum(arr, target);

    sort(arr.begin(), arr.end());
    cout << "\nSorted array:" << endl;
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nPerforming binary search for " << target << ":" << endl;
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }
    
    Complex c1(3, 2), c2(1, 4);
    
    // Testing different overloaded operators
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    
    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;
    
    Complex c4 = c1 * c2;
    cout << "c1 * c2 = " << c4 << endl;
    
    ++c1;
    cout << "After ++c1 = " << c1 << endl;
    
    cout << "c1 == c2: " << (c1 == c2) << endl;
    
    return 0;
}
