#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    long accountNumber;
    double balance;

public:
    BankAccount(const string &holder, long number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
            return true;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
            return false;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 123456, 1000.0);
    BankAccount account2("Alice Smith", 789012, 500.0);

    cout << "Initial account information:" << endl;
    account1.display();
    account2.display();

    account1.deposit(500.0);
    account2.withdraw(200.0);

    cout << "Updated account information:" << endl;
    account1.display();
    account2.display();

    return 0;
}
