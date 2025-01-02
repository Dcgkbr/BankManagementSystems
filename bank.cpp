#include <iostream>
#include <vector>
#include <string>

class BankAccount {
public:
    std::string name;
    std::string accountNumber;
    double balance;
};

class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    // Methods will be implemented in later commits
};

int main() {
    // Basic structure for the main function
    return 0;
}
class BankAccount {
public:
    std::string name;
    std::string accountNumber;
    double balance;

    // Constructor to initialize a bank account
    BankAccount(std::string name, std::string accountNumber, double initialDeposit)
        : name(name), accountNumber(accountNumber), balance(initialDeposit) {}
};
class BankAccount {
public:
    // Existing members...

    // Method to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited: " << amount << "\nNew Balance: " << balance << std::endl;
    }
};
class BankAccount {
public:
    // Existing members...

    // Method to withdraw money from the account
    bool withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
            return false;
        } else {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << "\nNew Balance: " << balance << std::endl;
            return true;
        }
    }
};
class BankAccount {
public:
    // Existing members...

    // Method to display account details
    void displayAccount() const {
        std::cout << "Account Holder: " << name
                  << "\nAccount Number: " << accountNumber
                  << "\nBalance: " << balance << std::endl;
    }
};


