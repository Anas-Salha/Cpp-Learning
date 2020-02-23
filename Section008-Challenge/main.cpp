#include <iostream>
using namespace std;

int main(){
	const int dollarValue {100};
	const int quarterValue {25};
	const int dimeValue {10};
	const int nickelValue {5};
	int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
	
	int cents;
	
	cout << "Enter an amount in cents: ";
	cin >> cents;
	
	dollars = cents / dollarValue;
	cents %= dollarValue;
	
	quarters = cents / quarterValue;
	cents %= quarterValue;
	
	dimes = cents / dimeValue;
	cents %= dimeValue;
	
	nickels = cents / nickelValue;
	cents %= nickelValue;
	
	pennies = cents;
	
	cout << "You can provide change for this value as follows: \n"
		<< "dollars  : " << dollars << endl
		<< "quarters : " << quarters << endl
		<< "dimes    : " << dimes << endl
		<< "nickels  : " << nickels << endl
		<< "pennies  : " << pennies << endl << endl;
	
	return 0;
}
