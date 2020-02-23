#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <limits>
using namespace std;

int main(){
	char command {};
	vector<int> intlist {};
	
	while(1){
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
			
		cin >> command;
		command |= 0x20; //change to lowercase
		
		if(command == 'p')
		{
			if(intlist.size() == 0)
				cout << "\n[] - the list is empty\n";
			else
			{
				cout << "\n[ ";
				for(auto num : intlist)
					cout << num << " ";
				cout << "]\n";
			}
		}
		else if(command == 'a')
		{
			int list_add {};
			cout << "\nEnter an integer to add to list: ";
			if(!(cin >> list_add))
			{
				cout << endl << "Invalid entry.\n";
				cin.clear(); //clear bad input flag
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
				continue;
			}
			intlist.push_back(list_add);
			cout << endl << list_add << " added.\n";
		}
		else if(command == 'm')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to calculate the mean - no data.\n";
			else
			{
				double list_mean {};
				double temp{0};
				for(auto num : intlist)
					temp += num;
				
				list_mean = temp / intlist.size();
				cout.precision(1);
				cout << fixed;
				cout << "\nThe mean is: " << list_mean << endl;
			}
		}
		else if(command == 's')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to find the smallest integer - list is empty.\n";
			else
			{
				int list_smallest{intlist.at(0)};
				for(size_t i {1}; i < intlist.size(); i++)
				{
					if(intlist.at(i) < list_smallest)
						list_smallest = intlist.at(i);
				}
				cout << "\nThe smallest integer in the list is: " << list_smallest << endl;
			}
		}
		else if(command == 'l')
		{
			if(intlist.size() == 0)
				cout << "\nUnable to find the largest integer - list is empty.\n";
			else
			{
				int list_largest{intlist.at(0)};
				for(size_t i {1}; i < intlist.size(); i++)
				{
					if(intlist.at(i) > list_largest)
						list_largest = intlist.at(i);
				}
				cout << "\nThe largest integer in the list is: " << list_largest << endl;
			}
		}
		else if(command == 'f')
		{
			if(intlist.size() == 0)
				cout << "\nNo point in searching - list is empty.\n";
			else
			{
				int list_find {};
				int frequency {};
				cout << "\nEnter an integer to find: ";
				cin >> list_find;
				for(auto num : intlist)
				{
					if(num == list_find)
						frequency++;
				}
				cout << "\n" << list_find << " is repeated " << frequency << " time(s) in the list.\n";
			}
		}
		else if(command == 'c')
		{
			if(intlist.size() == 0)
				cout << "\nThe list is already empty.\n";
			else
			{
				intlist.clear();
				cout << "\nThe list is cleared. \n";
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