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
	
	//constructors
	Player();																//no args
	Player(std::string name_val, int health_val, int xp_val);				//3 args
};

//constructors implementation
Player::Player()
	:name("Guest"), health(0), xp(0){
		std::cout << name << " (" << health << "/" << xp << ") has joined the party!\n";
		}
		
Player::Player(std::string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val){
		std::cout << name << " (" << health << "/" << xp << ") is ready to roll!\n";
		}
		
int main(){
	Player frank;
	Player joel("Joel", 500, 50);
	
	std::cout << std::endl;
	return 0;
}
