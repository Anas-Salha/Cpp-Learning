// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

//Constants
const int field_width {10};

//Function Prototypes 
double find_average(const std::vector<int> &scores);
int  process_responses(std::string key, std::string responses);
void print_student(std::string name, int score);
void print_footer(double average);
void print_header();


/**************************************************************************************** MAIN *****************************************************************************************************/
int main() {	
	std::ifstream in_file;
	std::string answer_key;
	std::string name;
	std::string responses;
	std::vector<int> scores;
	double average;
	
	in_file.open("../responses.txt");
	if (!in_file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }
	
	print_header();
	in_file >> answer_key;
	
	while(in_file >> name >> responses){
		int score = process_responses(answer_key, responses);
		scores.push_back(score);
		print_student(name, score);
	}
	
	average = find_average(scores);
	print_footer(average);
	
	std::cout << "\nClosing file." << std::endl;
	in_file.close();
    return 0;
}
/***************************************************************************************************************************************************************************************************/

//Function Definitions
double find_average(const std::vector<int> &scores){
	int total {};
	double average {};
	
	if (scores.size() == 0)
		return 0.0;
		
	for(size_t i {}; i < scores.size(); ++i){
		total += scores.at(i);
	}
	
	average = static_cast<double>(total) / scores.size();
	return average;
}
void print_header(){
	std::cout 	<< std::setw(field_width) << std::left << "Student"
				<< std::setw(field_width) << std::right << "Score"
				<< std::endl;
	
	std::cout 	<< std::setw(field_width * 2) << std::setfill('-') << ""
				<< std::setfill(' ') << std::endl;
}
int  process_responses(std::string key, std::string responses){
	int score {};
	for(size_t i {0}; i < key.length(); ++i){
		if(responses.at(i) == key.at(i))
			score++;
	}
	
	return score;
}
void print_student(std::string name, int score){
	std::cout	<< std::setw(field_width) << std::left << name 
				<< std::setw(field_width) << std::right << score
				<< std::endl;
}
void print_footer(double average){
	std::cout 	<< std::setw(field_width * 2) << std::setfill('-') << ""
				<< std::setfill(' ') << std::endl;
				
	std::cout	<< std::setw(field_width) << std::left << "Average" 
				<< std::setw(field_width) << std::right << average
				<< std::endl;
}