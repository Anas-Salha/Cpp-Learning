#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
	//attributes
	string name {"Player"};
	int hp {100}; //health points
	int mp {50}; //mana points
	int xp {10}; //experience points
	
	//methods
	void talk(string text_to_say){
		cout << name << ": " << text_to_say << endl;
	}
	bool is_dead();
};

class Account{
public:
	//attributes
	string name {"Account"};
	double balance {0.0};
	
	//methods
	bool deposit(double bal){
		balance += bal;
		cout << bal << " deposited successfully.\n";
		return true;
	}
	bool withdraw(double bal){
		balance -= bal;
		cout << bal << " withdrawn successfully.\n";
		return true;
	}
	void check_balance(){
		cout << name << "'s current balance is: " << balance << endl;
	}
};

int main(){
	Account frank_account;
	frank_account.name = "Frank M";
	frank_account.balance = 5000.0;
	
	frank_account.deposit(1000.0);
	frank_account.withdraw(300.0);
	frank_account.check_balance();
	
	Player Frank;
	//initialize Frank
	Frank.name = "Frank";
	Frank.hp = 100;
	Frank.mp = 100;
	Frank.xp = 15;
	Frank.talk("hello");
	
	Player *enemy = new Player;
	//initialize enemy
	(*enemy).name = "Deathstroke";
	enemy->hp = 150;
	enemy->mp = 150;
	enemy->xp = 20;
	enemy->talk("I will destroy you!");
	
	delete enemy;
	cout << endl;
	return 0;
}
