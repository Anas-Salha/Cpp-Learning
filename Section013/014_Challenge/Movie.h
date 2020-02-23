/*************************************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a movie with the following attributes
 * 
 * string name - the name of the movie
 * string age_rating - G, PG, PG-13, R
 * int num_watched - number of times the user watched the movie
 * int user_rating - [OPTIONAL] user rating of the movie (0-10)
 * 
 * ***********************************************************************************/

#ifndef _MOVIE_H
#define _MOVIE_H

#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	string name;
	string age_rating;
	int num_watched;
	int user_rating;
	
public:
	void increment_count();
	void display_movie() const;
	
	//setters
	void rate_movie(int user_rating_val);
	
	//getters
	string get_name() const {return name;}
	string get_age_rating() const {return age_rating;}
	int get_num_watched() const {return num_watched;}
	int get_user_rating() const {return user_rating;}
	
	Movie(string name_val, string age_rating, int num_watched, int user_rating);				//constructor
	Movie(const Movie &source);																	//copy constructor
/*	Movie(Movie &&source);																		//move constructor*/
	~Movie();																					//destructor
};

#endif // _MOVIE_H
