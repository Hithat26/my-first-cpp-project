// Dynamic Array Resizing
#include <iostream>
using namespace std;

class MyArray
{
    private: 
        int* data;
        int size;
        int capacity;

    public: 
        MyArray(int initial_capacity)
        {
            data = new int[initial_capacity];
            size = 0;
            capacity = initial_capacity;
        }

        ~MyArray(){ delete[] data;}

        void push(int value)
        {
            if (size == capacity)
            {
                int* new_data = new int[2 * capacity];
                for (int i = 0; i < size; i++)
                    new_data[i] = data[i];
                delete[] data;
                data = new_data;
                capacity *= 2;
            }
            data[size] = value;
            size++;
        }

        void print()
        {
            for (int i = 0; i < size; i++)
                cout << data[i] << " ";
            cout << endl;
        }
};

int main()
{
    MyArray arr(2);
    arr.push(5);
    arr.push(10);
    arr.push(15);
    arr.print();
    return 0;
}