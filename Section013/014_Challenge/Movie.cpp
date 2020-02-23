#include "Movie.h"

/***************************************** Constructors & Destructor *************************************************/
Movie::Movie(string name_val, string age_rating_val, int num_watched_val, int user_rating_val)
	:name(name_val), age_rating(age_rating_val), num_watched(num_watched_val){
		if(user_rating_val >= -1 && user_rating_val <= 10)
			user_rating = user_rating_val;
		else{
			cout << "Rating should be in range (0-10)." << endl;
			user_rating = -1;
		}
}

Movie::Movie(const Movie &source)
	:Movie(source.name, source.age_rating, source.num_watched, source.user_rating){
	}
	
Movie::~Movie()
{
}

/************************************************* Methods **********************************************************/
void Movie::increment_count(){
	num_watched++;
}

void Movie::display_movie() const{
	cout << name << " - " << age_rating << endl
		<< "Watched " << num_watched << " times." << endl;
		
	if(user_rating != -1)
		cout << "Rated: " << user_rating << endl;
	else
		cout << "Not rated. " << endl;
}

void Movie::rate_movie(int user_rating_val){
	user_rating = user_rating_val;
}
