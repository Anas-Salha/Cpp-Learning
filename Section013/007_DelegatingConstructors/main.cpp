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
	Player(std::string name_val, int health_val, int xp_val);				//3 args
	Player(std::string name_val, int health_val);							//2 args
	Player(std::string name_val);											//1 arg
	Player();																//no args
	
};

//constructors implementation
Player::Player(std::string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val){
		std::cout << name << " (" << health << "/" << xp << ") is ready to roll!\n";
		}
		
Player::Player(std::string name_val, int health_val)
	:Player(name_val, health_val, 0){
		std::cout << name << " (" << health << "/" << xp << ") just arrived in Valhalla!\n";
		}
		
Player::Player(std::string name_val)
	:Player(name_val, 0, 0){
		std::cout << name << " (" << health << "/" << xp << ") is sneaking their way in!\n";
		}
		
Player::Player()
	:Player("Guest", 0, 0){
		std::cout << name << " (" << health << "/" << xp << ") has joined the party!\n";
		}
		
		
int main(){
	Player joel("Joel", 500, 50);
	Player leo("Kingslayer", 1000);
	Player omar("TheArabWolf");
	Player frank;
	
	
	std::cout << std::endl;
	return 0;
}
