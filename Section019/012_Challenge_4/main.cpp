// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream in_file {"../romeoandjuliet.txt"};
    std::ofstream out_file{"../romeoandjuliet_out.txt"};
    if (!in_file) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
     if (!out_file) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
	//using getline
    std::string line{};
	int line_num {0};
	while (std::getline(in_file, line)){
		if(!line.empty()){
			out_file << std::setw(7) << std::left << ++line_num;
		}
		out_file << line << std::endl;
	}
		
    std::cout << "File copied" << std::endl;
    in_file.close();
    out_file.close();
    return 0;
}



