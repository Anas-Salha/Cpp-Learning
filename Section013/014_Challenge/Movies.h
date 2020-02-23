/*************************************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a movie collection with the following attributes
 * 
 * string collection_name - the title of the movie collection
 * vector<Movie> movie_collection - vector of the movies in the collection
 * 
 * ***********************************************************************************/

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
private:
	string collection_name;
	vector<Movie> movie_collection;
	
public:
	bool increment_watched(string movie_name);
	void display();
	bool add_movie(string movie_name, string age_rating, int num_watched, int user_rating);
	bool change_movie_rating(string movie_name, int user_rating_val);
	
	//setters
	void set_collection_name(string collection_name_val);
	//getters
	string get_collection_name() {return collection_name;}
	
	Movies(string collection_name_val = "Unnamed", vector<Movie> given_collection = {});
	Movies(const Movies &source);
	/*Movies(Movies &&source);*/
	~Movies();

};

#endif // _MOVIES_H_
