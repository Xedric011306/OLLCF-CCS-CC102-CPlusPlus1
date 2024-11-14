#include <iostream>
using namespace std;

int main() {
    int age;

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the user is too young to drive
    if (age < 16) {
        cout << "You are too young to drive." << endl;
    }
    // Check if the user is old enough to drive
    else if (age >= 16 && age < 18) {
        cout << "You are old enough to drive with a permit." << endl;
    }
    // Check if the user is 18 or older
    else if (age >= 18 && age < 100) {
        cout << "You can drive on your own. You're getting pretty old!" << endl;
    }
    // Check if the user is beyond a reasonable driving age
    else if (age >= 100) {
        cout << "You're getting pretty old! Are you still driving?" << endl;
    }

    return 0;
}
