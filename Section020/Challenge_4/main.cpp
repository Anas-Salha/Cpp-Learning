// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <queue>
#include <stack>
#include <iostream>
#include <string>
#include <iomanip>

//Function Prototypes
void process_string(const std::string& s, std::stack<char> &st, std::queue<char> &q);
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
bool is_palindrome(const std::string& str){
	std::stack<char> s;
	std::queue<char> q;
	process_string(str, s, q);
	
	char schar {};
	char qchar {};
	while (!s.empty()){
		schar = s.top();
		qchar = q.front();
		
		if(schar != qchar)
			return false;
		
		s.pop();
		q.pop();
	}
	return true;
}
void process_string(const std::string& str, std::stack<char>& s, std::queue<char>& q){
	for(char c: str){
		if(isalpha(c)){
			s.push(toupper(c));
			q.push(toupper(c));
		}
	}
}