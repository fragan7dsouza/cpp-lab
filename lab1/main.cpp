#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    double balance;
public:
    void initialize(string name, string accNo, double initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0.0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount Rs." << amount << " deposited successfully." << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Amount Rs." << amount << " withdrawn successfully." << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    string name, accNo;
    double initBalance;

    cout << "Enter name of the depositor: ";
    getline(cin, name);
    cout << "Enter account number: ";
    getline(cin, accNo);
    cout << "Enter initial balance: Rs.";
    cin >> initBalance;
    myAccount.initialize(name, accNo, initBalance);

    int choice;
    double amount;

    do {
        cout << "\n--- Bank Account Menu ---" << endl;
        cout << "1. Deposit Amount" << endl;
        cout << "2. Withdraw Amount" << endl;
        cout << "3. Display Account Info" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: Rs.";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: Rs.";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.display();
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
