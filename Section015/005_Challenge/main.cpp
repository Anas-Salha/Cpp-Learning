// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking 
    vector<Checking_Account> chk_accounts;
    chk_accounts.push_back(Checking_Account {});
    chk_accounts.push_back(Checking_Account {"Messi"} );
    chk_accounts.push_back(Checking_Account {"Ronaldo", 2000} );
    chk_accounts.push_back(Checking_Account {"Iniesta", 5000} );

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);
	
	// Trust 
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {});
    trust_accounts.push_back(Trust_Account {"Tommy"} );
    trust_accounts.push_back(Trust_Account {"Arthur", 2000} );
    trust_accounts.push_back(Trust_Account {"Alfie", 5000, 5.0} );

    display(trust_accounts);
    deposit(trust_accounts, 6000);
    withdraw(trust_accounts, 2000);
	withdraw(trust_accounts, 100);
	withdraw(trust_accounts, 20);
	withdraw(trust_accounts, 1);
	
    return 0;
}

