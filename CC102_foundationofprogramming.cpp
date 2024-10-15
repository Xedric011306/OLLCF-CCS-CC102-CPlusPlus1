#include <iostream>
using namespace std;
int main()
{
	double sugarPriceUSD, ricePricePound, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float pOS=50.00, kOR=60.00, pOSRD=30.00, pOC=25.00, pOM=15.00;
	
	cout << "Sugar, Rice, Sardines, Coffee, and Milk program\n";
	cout << "--------------------------------------------------------------";
	cout << "Enter quantity of sugar";
	cin >> sugarQty;
	cout << "Enter quantity of rice";
	cin >> riceQty;
	
	cout << "Enter quantity of sardines";
	cin >> sardinesQty;
	cout << "Enter quantity of coffee";
	cin  >> coffeeQty;
	cout << "Enter quantity of milk";
	cin >> milkQty;
	
	cout << "Price of sugar\t\t\t:\t$ " << pOS << " /Qty" << endl;
	cout << "Price of Rice\t\t\t:\t: USD " << kOR << " /Qty" << endl;
	cout << "Price of Sardines\t\t\t:\t$ " << pOSRD << " /Qty" << endl;
	cout << "Price of Coffee\t\t\t:\t$ " << pOC << " /Qty" << endl;
	cout << "Price of Milk\t\t\t:\t$ " << pOM << " /Qty" << endl;
	cout << "--------------------------------------------------------------";
	








	return 0;
}