// Bank Account Details
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        // privitization of data
        string accountNumber;
        double balance;

    public:
        // SetDetails , Deposit , Withdraw , GetDetails
        void setDetails(string accNo, double bal)
        {
            accountNumber = accNo;      // Storing into main variable accountNumber 
            balance = bal;              // Storing into main variable balance             
        }

        void deposit(double amount)
        {
            balance += amount;          // Adding to the balance
        }
        void withdraw(double amount)
        {
            if (amount > 0.00 && amount <= balance)
                balance -= amount;      // Subtracting from balance
            else
                cout << "Insufficient balance or invalid amount." << endl;      
        }

        void display()
        {
            cout << "Account Number: " << accountNumber <<endl;
            cout << "Balance: $" << balance <<endl;
        }
};

int main() 
{
    BankAccount obj;

    obj.setDetails("2356398", 5000.00);
    obj.deposit(3000.00);
    obj.withdraw(2000.00);
    obj.display();

    return 0;
}