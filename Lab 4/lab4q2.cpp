#include <iostream>
using namespace std;

class First
{
protected:
    int book_no;
    char book_name[50]; // changed from string to char array

public:
    void getdata()
    {
        cout << "Enter book number: ";
        cin >> book_no;
        cin.ignore();
        cout << "Enter book name: ";
        cin.getline(book_name, 50);
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
    char author_name[50];
    char publisher[50];

public:
    void getdata()
    {
        cout << "Enter author name: ";
        cin.getline(author_name, 50);
        cout << "Enter publisher name: ";
        cin.getline(publisher, 50);
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
