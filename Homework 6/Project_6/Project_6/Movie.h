//#pragma once
#include <string> // include the string library
using namespace std; // to avoid writing std:: when using cout<< and cin <<

#ifndef MOVIE_H // if the header movie is not defined 
#define MOVIE_H // then define it 

class Movie // class named  Movie 
{
//private: // private member variables
	string Name; // holds the movie name 
	string MPAA; // holds the movie MPAA rating 
	int ratings[5]; // holds the 5 user inputted ratings for the movie 
public: // public member function 
	Movie(); // default constructor 
	~Movie(); // default destructor 
	string getName(); // accessor function whose output it of type string. get the name 
	string getMPAA(); // accessor function whose output it of type string. gets the mpaa rating
	void setName(string n); // mutator function assigns a value to the name member 
	void setMPAA(string m); // mutator function assigns a value to the mpaa member 
	void addRating(int rate); // function that assigns the user ratings.
	double getAverage(); // calculates the average user rating for each film
};
#endif // !MOVIE_H   // end the if statement 
