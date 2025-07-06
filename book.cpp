// Details of a Book
#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        float price;

    public:
        // Constructor
        Book(string t, string a, float p)
        {
            title = t;
            author = a;
            price =  p;
        }

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
        }
};

int main()
{
    Book obj1("Harry Potter", "J.K.Rowling", 5000.00);
    Book obj2("Matilda", "Roald Dahl", 4000.00);

    obj1.display();
    obj2.display();
    
    return 0;
}