#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector <int> vector1;
	vector <int> vector2;
	vector <vector <int>> vector_2d;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "vector1 elements: {" << vector1.at(0) << ", " << vector1.at(1) << "}\n";
	cout << "vector2 elements: {" << vector2.at(0) << ", " << vector2.at(1) << "}\n\n";
	
	cout <<"vector_2d elements: \n";
	cout << "{\n\t" 
		 << "{" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "}\n\t"
		 << "{" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "}\n"
		 << "}\n\n";
		 
	vector1.at(0) = 1000;
	cout << "vector1 elements: {" << vector1.at(0) << ", " << vector1.at(1) << "}\n";
	cout << "vector2 elements: {" << vector2.at(0) << ", " << vector2.at(1) << "}\n\n";
	
	cout <<"vector_2d elements: \n";
	cout << "{\n\t" 
		 << "{" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "}\n\t"
		 << "{" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "}\n"
		 << "}\n\n";
		 
	return 0;
}
