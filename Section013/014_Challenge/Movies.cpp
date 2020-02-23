#include "Movies.h"

/***************************************** Constructors & Destructor *************************************************/
Movies::Movies(string collection_name_val, vector<Movie> given_collection)
	:collection_name(collection_name_val), movie_collection(given_collection){
	}

Movies::Movies(const Movies &source)
	:Movies(source.collection_name, source.movie_collection){
}

Movies::~Movies()
{
}

/************************************************* Methods **********************************************************/
bool Movies::increment_watched(string movie_name){
		for(Movie &m: movie_collection){
			if(m.get_name() == movie_name){
				m.increment_count();
				return true;
			}
		}
		return false;
}

void Movies::display(){
	if(movie_collection.size() == 0)
	{
		cout << "No movies in the collection." << endl << endl;
	} 
	else 
	{
		cout << "================================================================================" << endl
			<< collection_name << " (" << movie_collection.size() << ")" << endl
			<< "________________________________________" << endl;
		for(const Movie &m: movie_collection){
			m.display_movie();
			cout << "----------------------------------------" << endl;
		}
		cout << "================================================================================" << endl << endl;
	}
}

bool Movies::add_movie(string movie_name, string age_rating, int num_watched, int user_rating){
	for(const Movie &m: movie_collection){
		if(m.get_name() == movie_name)
			return false;
	}
		
	Movie new_movie{movie_name, age_rating, num_watched, user_rating};
	movie_collection.push_back(new_movie);
	
	return true;
}

bool Movies::change_movie_rating(string movie_name, int user_rating_val){
	for(Movie &m: movie_collection){
		if(m.get_name() == movie_name){
			m.rate_movie(user_rating_val);
			return true;
		}
	}
	return false;
}

void Movies::set_collection_name(string collection_name_val){
	cout << "Movie collection name changed from " << collection_name << " to ";
	collection_name = collection_name_val;
	cout << collection_name << endl << endl;
}