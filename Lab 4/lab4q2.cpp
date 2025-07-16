/*
2. Create a C++ program that has the following:
a. A class called First with data members book number, book name and member
functions getdata and putdata.
b. A class, Second, with data members author name and publisher and members
getdata and showdata.
c. Derive a class, Third, from the first and second with data members, number of
pages and year of publica
on.
d. Display all this information using an array of objects of the third class.
*/

#include <iostream>
using namespace std;

class First
{
protected:
    int book_no;
    string book_name;

public:
    void getdata()
    {
        cout << "Enter book number: ";
        cin >> book_no;
        cin.ignore();
        cout << "Enter book name: ";
        getline(cin, book_name);
    }

    void putdata()
    {
        cout << "Book Number   : " << book_no << endl;
        cout << "Book Name     : " << book_name << endl;
    }
};

class Second
{
protected:
    string author_name;
    string publisher;

public:
    void getdata()
    {
        cout << "Enter author name: ";
        getline(cin, author_name);
        cout << "Enter publisher name: ";
        getline(cin, publisher);
    }

    void showdata()
    {
        cout << "Author Name   : " << author_name << endl;
        cout << "Publisher     : " << publisher << endl;
    }
};

class Third : public First, public Second
{
private:
    int pages;
    int year;

public:
    void getdata()
    {
        First::getdata();
        Second::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter year of publication: ";
        cin >> year;
        cin.ignore();
    }

    void display()
    {
        cout << "\nBook Information\n";
        First::putdata();
        Second::showdata();
        cout << "Pages         : " << pages << endl;
        cout << "Year Published: " << year << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    Third books[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].getdata();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nDisplaying details for book " << i + 1 << ":\n";
        books[i].display();
    }

    return 0;
}
