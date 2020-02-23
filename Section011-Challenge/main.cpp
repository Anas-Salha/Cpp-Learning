#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <limits>
using namespace std;

char get_cmd();
void P__print_numbers(const vector <int> &list);
void A__add_number(vector <int> &list);
void M__display_mean(const vector <int> &list);
void S__display_smallest(const vector <int> &list);
void L__display_largest(const vector <int> &list);
void F__find_num_frequency(const vector <int> &list);\
void C__clear_list(vector <int> &list);


int main(){
	char command {};
	vector<int> intlist {};
	
	while(1){
		command = get_cmd();
		if(command == 'p')
		{
			if(intlist.size() == 0)
				cout << "\n[] - the list is empty\n";
			else
			{
				P__print_numbers(intlist);
			}
		}
		else if(command == 'a')
		{
			A__add_number(intlist);
		}
		else if(command == 'm')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to calculate the mean - no data.\n";
			else
			{
				M__display_mean(intlist);
			}
		}
		else if(command == 's')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to find the smallest integer - list is empty.\n";
			else
			{
				S__display_smallest(intlist);
			}
		}
		else if(command == 'l')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to find the largest integer - list is empty.\n";
			else
			{
				L__display_largest(intlist);
			}
		}
		else if(command == 'f')
		{
			if(intlist.size() == 0)
				cout << "\nNo point in searching - list is empty.\n";
			else
			{
				F__find_num_frequency(intlist);
			}
		}
		else if(command == 'c')
		{
			if(intlist.size() == 0)
				cout << "\nThe list is already empty.\n";
			else
			{
				C__clear_list(intlist);
			}
		}
		else if(command == 'q')
		{
			cout << "Goodbye\n\n";
			break;
		}
		else
		{
			cout << "Unknown selection, please try again.\n";
		}
	}
	return 0;
}


char get_cmd(){
	char cmd {};
	
	cout << "\n---------------------------------------\n" 
	<< "\nP - Print numbers\n" 
	<< "A - Add a number\n"
	<< "M - Display mean of the numbers\n"
	<< "S - Display the smallest number\n"
	<< "L - Display the largest number\n"
	<< "F - Find the frequency of a number\n"
	<< "C - Clear the list\n"
	<< "Q - Quit\n\n"
	<< "Enter your choice: ";
	
	cin >> cmd;
	cmd |= 0x20; //change to lowercase
	return cmd;
}

void P__print_numbers(const vector <int> &list){
	cout << "\n[ ";
	for(auto num : list)
		cout << num << " ";
	cout << "]\n";
}

void A__add_number(vector <int> &list){
	int list_add {};
	cout << "\nEnter an integer to add to list: ";
	if(!(cin >> list_add))
	{
		cout << endl << "Invalid entry.\n";
		cin.clear(); //clear bad input flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
	}else{
		list.push_back(list_add);
		cout << endl << list_add << " added.\n";
	}
}

void M__display_mean(const vector <int> &list){
	double list_mean {};
	double temp{0};
	for(auto num : list)
		temp += num;
	list_mean = temp / list.size();
	cout.precision(1);
	cout << fixed;
	cout << "\nThe mean is: " << list_mean << endl;
}

void S__display_smallest(const vector <int> &list){
	int list_smallest{list.at(0)};
	for(size_t i {1}; i < list.size(); i++)
	{
		if(list.at(i) < list_smallest)
			list_smallest = list.at(i);
	}
	cout << "\nThe smallest integer in the list is: " << list_smallest << endl;
}
void L__display_largest(const vector <int> &list){
	int list_largest{list.at(0)};
	for(size_t i {1}; i < list.size(); i++)
	{
		if(list.at(i) > list_largest)
			list_largest = list.at(i);
	}
	cout << "\nThe largest integer in the list is: " << list_largest << endl;
}

void F__find_num_frequency(const vector <int> &list){
	int list_find {};
	int frequency {};
	cout << "\nEnter an integer to find: ";
	cin >> list_find;
	for(auto num : list)
	{
		if(num == list_find)
			frequency++;
	}
	cout << "\n" << list_find << " is repeated " << frequency << " time(s) in the list.\n";
}

void C__clear_list(vector <int> &list){
	list.clear();
	cout << "\nThe list is cleared. \n";
}