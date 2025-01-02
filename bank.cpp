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
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void createAccount() {
        std::string name, accountNumber;
        double initialDeposit;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
        std::cout << "Enter your account number: ";
        std::getline(std::cin, accountNumber);
        std::cout << "Enter initial deposit: ";
        std::cin >> initialDeposit;
        std::cin.ignore(); // Clear input buffer

        BankAccount newAccount(name, accountNumber, initialDeposit);
        accounts.push_back(newAccount);
        std::cout << "Account created successfully!" << std::endl;
    }
};
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void deposit() {
        std::string accountNumber;
        double amount;

        std::cout << "Enter your account number: ";
        std::getline(std::cin, accountNumber);
        
        for (auto& account : accounts) {
            if (account.accountNumber == accountNumber) {
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                account.deposit(amount);
                return;
            }
        }
        
        std::cout << "Account not found!" << std::endl;
    }
};
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void withdraw() {
        std::string accountNumber;
        double amount;

        std::cout << "Enter your account number: ";
        std::getline(std::cin, accountNumber);
        
        for (auto& account : accounts) {
            if (account.accountNumber == accountNumber) {
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                if (account.withdraw(amount)) {
                    return; // Successful withdrawal
                }
                return; // Insufficient funds
            }
        }
        
        std::cout << "Account not found!" << std::endl;
    }
};
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void displayAccounts() const {
        if (accounts.empty()) {
            std::cout << "No accounts available." << std::endl;
            return;
        }

        for (const auto& account : accounts) {
            account.displayAccount();
            std::cout << "-------------------------------" << std::endl;
        }
    }
};
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void saveAccountsToFile() const {
        std::ofstream outFile("accounts.txt");
        
        for (const auto& account : accounts) {
            outFile << account.name << "," 
                    << account.accountNumber << "," 
                    << account.balance << "\n";
        }
        
        outFile.close();
    }
};
class BankManagementSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void loadAccountsFromFile() {
        accounts.clear(); // Clear existing accounts

        std::ifstream inFile("accounts.txt");
        
        if (!inFile) {
            return; // No file found
        }

        while (!inFile.eof()) {
            std::string line;
            getline(inFile, line);
            
            if (line.empty()) continue; // Skip empty lines
            
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);

            if (pos1 == std::string::npos || pos2 == std::string::npos) continue; // Invalid format

            std::string name = line.substr(0, pos1);
            std::string accNum = line.substr(pos1 + 1, pos2 - pos1 - 1);
            double balance = stod(line.substr(pos2 + 1));

            accounts.emplace_back(name, accNum, balance);
        }
        
        inFile.close();
    }
};
// This code was added previously in `loadAccountsFromFile`, it's for handling empty lines.
void displayMenu() {
    std::cout << "\n--- Bank Management System Menu ---\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Display All Accounts\n";
    std::cout << "5. Exit\n";
}
int main() {
    BankManagementSystem bms;
    bms.loadAccountsFromFile();

    int choice;
    do {
        displayMenu();
        
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1:
                bms.createAccount();
                break;
            case 2:
                bms.deposit();
                break;
            case 3:
                bms.withdraw();
                break;
            case 4:
                bms.displayAccounts();
                break;
            case 5:
                bms.saveAccountsToFile(); // Save accounts before exiting
                break;
            default:
                if (choice != 5) 
                    std::cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0; // Exit the program
}
std::cin.ignore(); // Already added after each input in `main` function
std::cout << "Account created successfully!" << std::endl;  // Already added in `createAccount` function
std::cout << "Account not found!" << std::endl;  // Already included in the `withdraw` function
std::cout << "Account not found!" << std::endl;  // Already included in the `withdraw` function





