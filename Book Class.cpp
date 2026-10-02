#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:

    // Parameterized Constructor
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Copy Constructor
    Book(const Book &obj)
    {
        title = obj.title;
        author = obj.author;
        price = obj.price;
    }

    // Display Book Details
    void display()
    {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : Rs. " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Book object destroyed." << endl;
    }
};

int main()
{
    // Creating original object
    Book original("C++ Programming", "Bjarne Stroustrup", 599);

    cout << "Original Book:" << endl;
    original.display();

    // Creating copied object
    Book copy(original);

    cout << "\nCopied Book:" << endl;
    copy.display();

    return 0;
}