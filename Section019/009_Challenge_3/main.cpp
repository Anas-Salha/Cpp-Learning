// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

//Function Prototypes
bool find_substring(const std::string &toFind, const std::string &word);

int main() {
	std::ifstream in_file;
	std::string word_to_find;
	std::string word_read;
	std::string line{};
	int word_count {0};
	int match_count {0};
	
	in_file.open("../romeoandjuliet.txt");
	if (!in_file) {
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}
	
	std::cout << "Enter the substring to search for: ";
	std::cin >> word_to_find;
	
	//Read file, count words, count substring frequency
	while (in_file >> word_read) {
		++word_count;
		if(find_substring(word_to_find, word_read))
			++match_count;
	}
	
	std::cout	<< word_count << " words were searched..." << std::endl
				<< "The substring " << word_to_find << " was found " << match_count << " times" << std::endl;
	
	std::cout << std::endl;
    return 0;
}

//Function Definitions
bool find_substring(const std::string &toFind, const std::string &word){
	if (word.find(toFind) != std::string::npos)
		return true;
	return false;
}
