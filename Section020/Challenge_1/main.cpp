// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

//Function Prototypes
std::deque<char> process_string(const std::string& s);
bool is_palindrome(const std::string& s);

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}


//Function Definitions
bool is_palindrome(const std::string& s){
	std::deque<char> processed_s {process_string(s)};
	size_t pos1 {0}, pos2 {processed_s.size() - 1};
	
	while (pos1 < pos2){
		if(processed_s.at(pos1) != processed_s.at(pos2))
			return false;
		pos1++;
		pos2--;
	}
	
	return true;
}
std::deque<char> process_string(const std::string& s){
	std::deque<char> d {};
	
	for(char c: s){
		if(isalpha(c)){
			d.push_back(toupper(c));
		}
	}
	
	return d;
}