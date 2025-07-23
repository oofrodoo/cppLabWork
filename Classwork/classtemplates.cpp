#include <iostream>
using namespace std;
const int MAX = 3;
template <class Type>

class Stack
{
private:
    Type st[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    class Full
    {
    };

    class Empty
    {
    };

    void push(Type var)
    {
        st[++top] = var;
    }
    Type pop()
    {
        return st[top--];
    }
};

int main()
{

    Stack<float> s1;
    s1.push(111.1f);
    s1.push(222.2f);
    s1.push(333.3f);
    s1.push(444.4f);
    s1.push(555.5f);
    s1.push(666.6f);

    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    return 0;
}
