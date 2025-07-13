// Template class Stack<T>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
    private:
        T data[100];    // stores the element (generic type)
        int top = -1;   // index of topmost element (-1 = empty)
    public:
        void push(T val)
        {
            if(top >= 99)
            {
                cout << "Stack Overflow!\n";
                return;
            }
            data[++top] = val;
        }

        T pop()
        {
            if (top <= -1)
            {
                cout << "Stack Underflow!\n";
                return T(); // default-constructed value
            }
            return data[top--];
        }

        bool isEmpty() 
        {
            return top == -1;
        }

};

int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(40);
    cout << s1.pop() << endl;

    Stack<string> s2;
    s2.push("Hello");
    s2.push("Stack");
    s2.push("World");
    cout << s2.pop() << endl;
    
    return 0;
}