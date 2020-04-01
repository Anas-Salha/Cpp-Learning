// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

//Structures
struct City {
    std::string name;
    long population;
    double cost;
};
struct Country {
    std::string name;
    std::vector<City> cities;
};
struct Tours {
    std::string title;
    std::vector<Country> countries;
};

//Constants
const int total_width {70};
const int field1_width {20};
const int field2_width {20};
const int field3_width {15};
const int field4_width {15};

//Function Prototypes
void ruler();
void title(const std::string title);
void display(const Tours &tours);
void table(const std::vector<Country> &countries);

/**************************************************************************************** MAIN *****************************************************************************************************/
int main(){
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 }, 
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
	
	display(tours);
    std::cout << std::endl << std::endl;
    return 0;
}
/***************************************************************************************************************************************************************************************************/

//Function Definitions
void ruler(){
	std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl;
}
void title(const std::string title){
	std::cout << std::setw((total_width - title.length())/2) << "" << title 
				<< std::endl << std::endl;
				
	std::cout << std::setw(field1_width) << std::left << "Country" 
				<< std::setw(field2_width) << std::left << "City" 
				<< std::setw(field3_width) << std::right << "Population"
				<< std::setw(field4_width) << std::right << "Price" 
				<< std::endl;
				
	std::cout << std::setw(70) << std::setfill('-') << "" << std::endl;
				
	std::cout << std::setfill(' ');
}
void table(const std::vector<Country> &countries){
	std::cout << std::fixed << std::setprecision(2);
	
	for(auto country : countries) {   // loop through the countries
		for(size_t i {0}; i < country.cities.size(); i++){
			std::cout	<< std::setw(field1_width) << std::left << ((i==0) ? country.name : "")
						<< std::setw(field2_width) << std::left << country.cities.at(i).name 
						<< std::setw(field3_width) << std::right << country.cities.at(i).population 
						<< std::setw(field4_width) << std::right << country.cities.at(i).cost 
						<< std::endl;
		}
	std::cout << std::endl;
	}
}
void display(const Tours &tours){
	ruler();
	title(tours.title);
	table(tours.countries);
}