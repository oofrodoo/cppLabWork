#include <iostream>
using namespace std;

class First
{
protected:
    int book_no;
    char book_name[50];

public:
    void getdata()
    {
        cout << "Book No: ";
        cin >> book_no;
        cin.ignore();
        cout << "Book Name: ";
        cin.getline(book_name, 50);
    }

    void putdata()
    {
        cout << "Book No   : " << book_no << endl;
        cout << "Book Name : " << book_name << endl;
    }
};

class Second
{
protected:
    char author[50], publisher[50];

public:
    void getdata()
    {
        cout << "Author    : ";
        cin.getline(author, 50);
        cout << "Publisher : ";
        cin.getline(publisher, 50);
    }

    void showdata()
    {
        cout << "Author    : " << author << endl;
        cout << "Publisher : " << publisher << endl;
    }
};

class Third : public First, public Second
{
    int pages, year;

public:
    void getdata()
    {
        First::getdata();
        Second::getdata();
        cout << "Pages     : ";
        cin >> pages;
        cout << "Year      : ";
        cin >> year;
        cin.ignore();
    }

    void display()
    {
        cout << "\n--- Book Info ---\n";
        First::putdata();
        Second::showdata();
        cout << "Pages     : " << pages << endl;
        cout << "Year      : " << year << endl;
    }
};

int main()
{
    int n;
    cout << "How many books? ";
    cin >> n;
    cin.ignore();

    Third b[100];
    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << ":\n";
        b[i].getdata();
    }

    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }

    return 0;
}
