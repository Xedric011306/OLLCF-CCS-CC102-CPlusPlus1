#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    int age;
    char withParents;
    double money;

    // Get user input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you with your parents? (y/n): ";
    cin >> withParents;

    cout << "How much money do you have? $";
    cin >> money;

    // Determine available movie types based on age and withParents condition
    cout << "Available movie types: ";
    if (age < 13) {
        if (withParents == 'y' || withParents == 'Y') {
            cout << "Naruto, Avengers, Hellboy\n";
        } else {
            cout << "Justice league, Hellboy\n";
        }
    } else if (age >= 13 && age < 16) {
        if (withParents == 'y' || withParents == 'Y') {
            cout << "Naruto, Avengers, Hellboy\n";
        } else {
            cout << "Naruto, Avengers\n";
        }
    } else if (age >= 16) {
        cout << "Naruto, Avengers, Hellboy\n";
    }

    // Check if the user can afford the movie ticket
    if (age < 13) {
        if (money >= 7.50) {
            cout << "You can afford the movie ticket ($7.50).\n";
        } else {
            cout << "You cannot afford the movie ticket.\n";
        }
    } else if (age >= 13 && age < 16) {
        if (money >= 7.50) {
            cout << "You can afford the movie ticket ($7.50).\n";
        } else {
            cout << "You cannot afford the movie ticket.\n";
        }
    } else if (age >= 16) {
        if (money >= 10.50) {
            cout << "You can afford the movie ticket ($10.50).\n";
        } else {
            cout << "You cannot afford the movie ticket.\n";
        }
    }

    // Determine if it's an evening or matinee
    string timeOfDay;
    cout << "Enter time of day (morning/afternoon/evening): ";
    cin >> timeOfDay;

    if (timeOfDay == "morning" || timeOfDay == "afternoon") {
        cout << "You are attending a matinee movie.\n";
    } else if (timeOfDay == "evening") {
        cout << "You are attending an evening movie.\n";
    } else {
        cout << "Invalid time of day entered.\n";
    }

    return 0;
}
