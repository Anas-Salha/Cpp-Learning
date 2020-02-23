#include <iostream>
#include <string>

//Player class
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
	
	std::string get_name() {return name;}
	int get_health() {return health;}
	int get_xp() {return xp;}
	
	//constructor
	Player(std::string name_val = "Guest", int health_val = 100, int xp_val = 0);				//3 args
	
	//copy constructor
	Player(const Player &source);
	
	//destructor
	~Player() {std::cout << "Destructor called for " << name << std::endl;}
};

//function prototypes 
void display_player(Player p);

int main(){
	Player leo("Kingslayer", 1000);
	Player lionel {leo};
	
	Player joel("Joel", 500, 50);
	Player omar("TheArabWolf");
	Player frank;
	
	std::cout << std::endl;
	return 0;
}

//constructor implementation
Player::Player(std::string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val){
		std::cout << name << " (" << health << "/" << xp << ") is in the party!\n";
		}
		
//copy constructor implementation
Player::Player(const Player &source)
	//:name(source.name), health(source.health), xp(source.xp){
	:Player{source.name, source.health, source.xp}{
		std::cout << "A clone has been made. There are two of "<< name << " (" << health << "/" << xp << ") now!\n";
		}
		
//function declaration
void display_player(Player p){
	std::cout << "Name: " << p.get_name() << std::endl;
	std::cout << "Health: " << p.get_health() << std::endl;
	std::cout <<  "XP: " << p.get_xp() << std::endl;
}

