#include <iostream>
#include <string>
using namespace std;

int main(){
	string input_string {};
	string output_line {};
	
	cout << "Enter string for letter pyramid: ";
	cin >> input_string;
	
	for(size_t position {}; position < input_string.length(); position++){
		string spaces(input_string.length() - position - 1, ' '); //determine number of spaces
		
		output_line = input_string.substr(0, position + 1); //Part 1 of output_line: from (index = 0) of input_string to (index = current position)
		
		//Part 2 of output_line: from (index = current_position - 1) of input_string to (index = 0) 
		for(size_t i {position}; i > 0; i--){
			output_line += input_string.at(i-1);
		}
		cout << spaces << output_line << endl;
	}
	return 0;
}
