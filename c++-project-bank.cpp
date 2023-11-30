#include <iostream>
#include <string>
class BankAccount {
private:
    std::string name;
    std::string accNumber;
    std::string accType;
    double balance = 100000.00;
    bool cardInserted = false;
public:
    void showBalance() {
        std::cout << "\nBalance Amount: " << balance << std::endl;
    }
    void deposit() {
        double amount1;
        std::cout << "\nEnter the amount you want to Deposit: ";
        std::cin >> amount1;
        balance += amount1;
        std::cout << "\nTotal balance is: " << balance;
    }

    void withdraw() {
        double amount2;
        std::cout << "\nEnter the amount you want to withdraw: ";
        std::cin >> amount2;
        balance -= amount2;
        std::cout << "\nAvailable Balance is " << balance;
    }

    // Function to simulate card insertion
    void insertCard() {
        std::cout << "\nPlease insert your card and press any key." << std::endl;
        // Wait for the user to press any key
        std::cin.ignore();
        std::cout << "\nCard inserted successfully." << std::endl;
        cardInserted = true;
    }

    // Function to display account details
    void displayAccountDetails() {
        if (cardInserted) {
            std::cout << "\nYOUR ACCOUNT DETAILS:";
            std::cout << "\nName: KANIMOZHI";
            std::cout << "\nAccount No: SB1234456";
            std::cout << "\nBank name: Indian bank";
            std::cout << "\nAccount type: SAVINGS ACCOUNT";
        } else {
            std::cout << "\nPlease insert your card first." << std::endl;
        }
    }
};

int main() {
    BankAccount acc;

    // Prompt user to insert card
    acc.insertCard();

    // Display account details after card insertion
    acc.displayAccountDetails();

    int choice;
    while (1) {
        std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                  << "~~~WELCOME TO OUR BANK~~~~~~~~~~~~~~~~~~"
                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                  << "~~~~~~~~~\n\n";

        std::cout << "\nOPTIONS: ";
        std::cout << "\n1. BALANCE ENQUIRY";
        std::cout << "\n2. DEPOSIT MONEY";
        std::cout << "\n3. WITHDRAW MONEY";
        std::cout << "\n4. Exit";
        std::cout << "\nEnter Your Choice: ";
        std::cin >> choice;

        // Choices to select from
        switch (choice) {
        case 1:
            acc.showBalance();
            break;
        case 2:
            acc.deposit();
            break;
        case 3:
            acc.withdraw();
            break;
        case 4:
            std::cout << "Thank you!";
            return 0;
        default:
            std::cout << "\nInvalid choice\n";
        }
    }

    return 0;
}
