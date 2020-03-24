#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
	try{
		//Checking_Account frank {"Frank", -5000};
		Checking_Account frank {"Frank", 5000};
		//frank.withdraw(5000);
		frank.withdraw(4000);
		cout << frank << endl;
	}
	catch (const IllegalBalanceException &ex){
		cout << ex.what() << endl;
	}
	catch (const InsufficientFundsException &ex){
		cout << ex.what() << endl;
	}
	
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

