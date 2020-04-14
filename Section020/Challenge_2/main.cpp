// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

//Classes
class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};
std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

//Function Prototypes
void display_menu();
void play_current_song(const Song &song);
void display_playlist(const std::list<Song> &playlist, const Song &current_song);

int main() {
	char user_cmd {};
	std::string name {}, artist {};
	int rating {};
	
	std::list<Song> playlist{
			{"God's Plan",        "Drake",                     5},
			{"Never Be The Same", "Camila Cabello",            5},
			{"Pray For Me",       "The Weekend and K. Lamar",  4},
			{"The Middle",        "Zedd, Maren Morris & Grey", 5},
			{"Wait",              "Maroone 5",                 4},
			{"Whatever It Takes", "Imagine Dragons",           3}          
	};

	std::list<Song>::iterator current_song = playlist.begin();
	display_playlist(playlist, *current_song);
	
	do{
		display_menu();
		std::cin >> user_cmd;
		std::cout << std::endl;
		user_cmd = toupper(user_cmd);
		
		switch(user_cmd){
			case 'F':	std::cout << "Playing first song" << std::endl;
						current_song = playlist.begin();
						play_current_song(*current_song);
						break;
			case 'N':	std::cout << "Playing next song" << std::endl;
						++current_song;
						if(current_song == playlist.end()){
							current_song = playlist.begin();
						}
						play_current_song(*current_song);
						break;
			case 'P':	std::cout << "Playing next song" << std::endl;
						if(current_song == playlist.begin()){
							current_song = playlist.end();
						}
						--current_song;
						play_current_song(*current_song);
						break;
			case 'A':	std::cout << "Song name: ";
						std::cin.ignore();
						std::getline(std::cin, name);
						std::cout << "Artist name: ";
						std::getline(std::cin, artist);
						std::cout << "Song rating (1-5): ";
						std::cin >> rating;
						std::cout << std::endl;
						playlist.emplace(current_song, name, artist, rating);
						current_song--;
						break;
			case 'L':	display_playlist(playlist, *current_song);
						break;
			case 'Q':	std::cout << "Thanks for listening!" << std::endl;
						break;
			default:	std::cout << "Invalid choice, try again.." << std::endl;
		}
	} while(user_cmd != 'Q');
	
	return 0;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}
void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    std::cout	<< "Playing: " << std::endl
				<< song << std::endl;
}
void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
	
	for(auto song: playlist){
		std::cout	<< song << std::endl;
	}
	
	std::cout	<< std::endl;
	std::cout	<< "Current song: " << std::endl
				<< current_song << std::endl;
    std::cout << "You implement this function" << std::endl;
}