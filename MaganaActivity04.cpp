#include <iostream>
#include <string>
using namespace std;

int main() {
    double balance;
    string accountType;
    
    // Ask user for the balance and account type
    cout << "Enter your account balance: $";
    cin >> balance;

    cout << "Enter your account type (Standard, Personal, Gold, Business, Platinum): ";
    cin >> accountType;

    double interestRate = 0.0; // Default interest rate

    // Determine interest rate based on account type and balance
    if (accountType == "Standard") {
        if (balance >= 10000) {
            interestRate = 2.5;  // Standard with balance >= $10000
        } else if (balance >= 1500) {
            interestRate = 1.7;  // Standard with balance >= $1500
        } else if (balance >= 0) {
            interestRate = 1.2;  // Standard with balance >= $0
        }
    } else if (accountType == "Personal") {
        if (balance >= 5000) {
            interestRate = 2.3;  // Personal with balance >= $5000
        } else if (balance >= 1000) {
            interestRate = 1.9;  // Personal with balance >= $1000
        }
    } else if (accountType == "Gold") {
        if (balance >= 5000) {
            interestRate = 2.3;  // Gold with balance >= $5000
}