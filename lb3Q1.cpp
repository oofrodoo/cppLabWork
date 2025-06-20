// unary operator overloading
#include <iostream>
using namespace std;
class Counter {
    private: // private, so only functions inside the class can access or modify it.
        unsigned int count; // unsigned int means it can only store positive whole numbers (0, 1, 2, ...)
    public: // Everything under this line is accessible from outside the class (like main()).
        /*
        Counter () : count (0) // constructor
        {}
        */
        // this can also be written as:
        Counter (){ 
            count = 5;  // "When a new counter is made, its value starts at zero."
        }
        unsigned int get_count ()   
        {
            return count; //Since count is private, this is the only way to see the value from outside.
        }
        /*This is operator overloading. (Pre-decrement)
        It defines what happens when we write ++object; (pre-decrement).
        Inside it, we do --count;, which increases the value by 1.
        Now the -- operator works on our Counter object just like it does with normal numbers.
        🧠 In short: When you write --c1;, this function runs, and it decreases c1.count by 1.
        */
        void operator -- () 
        {
            --count;
        }
        void operator -- (int) // Post-decrement
        {
            count--;
        }
};

int main ()
{
    Counter c1,c2; // define and initialize
    cout << "Initial Counter values:\n";
    cout << "\n C1 = " << c1.get_count()<<endl; 
    cout << "\n C2 = " << c2.get_count()<<endl<<endl; 

    --c1;
    --c2;
    --c2;
    cout << "After pre-decrement operator Counter values:\n";
    cout << "\n C1 = " << c1.get_count()<<endl; 
    cout << "\n C2 = " << c2.get_count()<<endl<<endl; 

    c1--;
    c2--;
    c2--;
    cout << "After Post-decrement operator Counter values:\n";
    cout << "\n C1 = " << c1.get_count()<<endl; 
    cout << "\n C2 = " << c2.get_count()<<endl<<endl; 

    return 0;




}