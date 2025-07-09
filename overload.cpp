// Overload + Operator for Complex Numbers
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;
    
    public:
        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }

        void display()
        {
            cout << "Sum = " << real << " + i" << imag << endl;
        }

        Complex operator+(const Complex &obj)
        {
            Complex result(0, 0);
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}