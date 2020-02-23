#include <iostream>
#include <string>

class Player{
private:
	//attributes
	std::string name;
	int health;
	int xp;
	
	public:
	//methods
	void set_name(std::string name_val){
		name = name_val;
	}
	
	std::string get_name(){
		return name;
	}
	
	//constructor
	Player(std::string name_val = "Guest", int health_val = 100, int xp_val = 0);				//3 args
};

//constructor implementation
Player::Player(std::string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val){
		std::cout << name << " (" << health << "/" << xp << ") is in the party!\n";
		}
		
int main(){
	Player joel("Joel", 500, 50);
	Player leo("Kingslayer", 1000);
	Player omar("TheArabWolf");
	Player frank;
	
	
	std::cout << std::endl;
	return 0;
}
