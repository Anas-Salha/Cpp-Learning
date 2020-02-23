#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.0);
	
	if(frank_account.deposit(200.0))
		cout << "Deposit successful." << endl;
	else
		cout << "Deposit failed." << endl;
		
	if(frank_account.withdraw(500.0))
		cout << "Withdraw successful." << endl;
	else 
		cout << "Not sufficient funds." << endl;
	
	return 0;
}
