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
