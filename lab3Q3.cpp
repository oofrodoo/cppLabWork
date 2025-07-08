#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    enum
    {
        SZ = 80
    };
    char str[SZ];

public:
    String() { strcpy(str, ""); }
    String(const char s[]) { strcpy(str, s); }
    void display() const { cout << str; }
    void getstr() { cin.get(str, SZ); }
    bool operator==(const String &ss) const
    {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};

int main()
{
    String s1 = "hello";
    String s2 = "user";
    String s3;

    cout << "\nEnter 'hello' or 'user': ";
    s3.getstr();

    if (s3 == s1)
    {
        cout << "You typed hello\n";
    }
    else if (s3 == s2)
    {
        cout << "You typed user\n";
    }
    else
    {
        cout << "You didn't follow instructions\n";
    }
    return 0;
}
