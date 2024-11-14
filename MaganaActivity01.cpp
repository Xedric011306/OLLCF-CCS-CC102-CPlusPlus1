#include <iostream>
using namespace std;

int main() {
    double temperature;
    
    cout << "Enter the temperature in degrees: ";
    cin >> temperature;
    
    if (temperature < 32) {
        cout << "It's cold! Bring a heavy jacket." << endl;
    } else if (temperature >= 32 && temperature <= 50) {
        cout << "It's a bit chilly! Bring a light jacket." << endl;
    } else {
        cout << "It's warm! No jacket needed." << endl;
    }

    return 0;
}