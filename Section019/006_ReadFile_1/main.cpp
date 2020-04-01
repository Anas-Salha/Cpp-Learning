// Section 19
// Read file 1
// Continuous read and display of data items

#include <iostream>
#include <fstream> 
#include <iomanip>

int main(){
	std::ifstream in_file;
	std::string name;
	int num;
	double total;
	
	in_file.open("../test.txt");
	if(!in_file){
		std::cout << "Error opening file!" << std::endl;
		return 1;
	}
	
	while(!in_file.eof()){
		in_file >> name >> num >> total;
		std::cout	<< std::setw(10) << std::left << name 
					<< std::setw(10) << num 
					<< std::setw(10) << total 
					<< std::endl;
	}
	
	in_file.close();
	std::cout << std::endl;
	return 0;
}
