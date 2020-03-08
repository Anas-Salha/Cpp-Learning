#include "Checking_Account.h"


//constructor
Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount){
	balance -= withdrawal_fee;
	if(Account::withdraw(amount)){
		return true;
	}
	else{
		balance += withdrawal_fee;
		return false;
	}
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
    os << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return os;
}