#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() { balance = 0; }
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }
    void display() { cout << "Current balance: " << balance << endl; }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(300);
    acc.display();
}
