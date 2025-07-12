// Use friend function to print Book details
#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string title;
        float price;

    public:
        Book(string t, float p) : title(t), price(p) {}
        friend void display(Book b);
};

void display(Book b)
{
    cout << b.title << ", " << b.price << endl;
}

int main()
{
    Book b1("Harry Potter", 5000.00);
    display(b1);
    return 0;
}