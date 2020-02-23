#include <iostream>
#include <string>

using namespace std;

class Player{
private:
	//attributes 
	string name {"Player"};
	int hp {80};
	int mp {50};
	int xp {10};
	
public:
	//methods
	void talk(string text_to_say){
		cout << name << " (" << hp << ")" ": " << text_to_say << endl;
	}
	void heal(){
		if(hp < 100){
			hp = 100;
			cout << name << " has been healed.\n";
		}else{
			cout << name << "'s health is already full.\n";
		}
	}
	bool is_dead();
};

int main(){
	Player frank;
	//frank.name = "Frank";
	frank.talk("heal me");
	frank.heal();
	frank.talk("thanks!");
	frank.heal();
	
	cout << endl;
	return 0;
}
