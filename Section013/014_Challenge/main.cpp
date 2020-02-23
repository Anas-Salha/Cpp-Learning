/*************************************************************************************
 * Section 13 Challenge
 * main.cpp
 * 
 * ***********************************************************************************/

#include <iostream>
#include <string>
#include "Movies.h"

/********************************* Helper function prototypes *********************************/

void add_movie(Movies &movie_list, string name, string age_rating, int num_watched, int user_rating = -1);
void increment_watched(Movies &movie_list, string name);
void change_movie_rating(Movies &movie_list, string name, int user_rating_val);

/**********************************************************************************************/

int main(){	
	Movies mymovies;
	mymovies.display();
	
	add_movie(mymovies, "Endgame", "PG-13", 5, 100);
	mymovies.display();
	
	change_movie_rating(mymovies, "Endgame", -3);
	change_movie_rating(mymovies, "Endgame", 10);
	change_movie_rating(mymovies, "XX", 10);
	
	mymovies.set_collection_name("Favourite Movies");
	add_movie(mymovies, "Joker", "R", 2);
	add_movie(mymovies, "Joker", "R", 5);
	increment_watched(mymovies, "Endgame");
	increment_watched(mymovies, "Big");
	
	mymovies.display();
	
	return 0;
}


/********************************* Helper function definitions *********************************/

/* **********************************************************************
 * name: add_movie
 * 
 * description: 
 * - adds movie to movie collection
 * - prints error message if movie is already in the movie collection
 * 
 * parameters:
 * - Reference to a Movies object
 * - Movie name to add
 * - Movie rating - G, PG, PG-13, R
 * - Number of times the user watched the movie
 * - [OPTIONAL] User rating of the movie (0-10)
 * 
 * **********************************************************************/
 
void add_movie(Movies &movie_list, string name, string age_rating, int num_watched, int user_rating){
	if(movie_list.add_movie(name, age_rating, num_watched, user_rating))
		cout << name << " added to the collection " << movie_list.get_collection_name() << endl << endl;
	else
		cout << name << " is already in the collection " << movie_list.get_collection_name() << endl << endl;
		
}

/* **********************************************************************
 * name: increment_watched
 * 
 * description: 
 * - increments number of times the user watched a movie
 * - prints error message if movie is not found in the movie collection
 * 
 * parameters:
 * - Reference to a Movies object
 * - Movie name
 * 
 * **********************************************************************/
void increment_watched(Movies &movie_list, string name){
	if(movie_list.increment_watched(name))
	{
		cout << name << " watch incremented." << endl << endl;
	} else 
	{
		cout << "Movie '" << name << "' not found in the collection." << endl << endl;
	}
}

/* **********************************************************************
 * name: change_movie_rating
 * 
 * description: 
 * - changes movie rating
 * - prints error message if movie is not found in the movie collection
 * 
 * parameters:
 * - Reference to a Movies object
 * - Movie name
 * - User rating (0-10)
 * 
 * **********************************************************************/
 
void change_movie_rating(Movies &movie_list, string name, int user_rating_val){
	if(!(user_rating_val >= -1 && user_rating_val <= 10)){
		cout << "Rating must be in range (0-10)" << endl << endl;
		return; 
	}
	
	if(movie_list.change_movie_rating(name, user_rating_val))
	{
		cout << name << " rating changed to " << user_rating_val << endl << endl;
	} else
	{
		cout << "Movie '" << name << "' not found in the collection." << endl << endl;
	}
}
/***********************************************************************************************/