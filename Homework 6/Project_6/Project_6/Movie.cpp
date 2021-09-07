#include "Movie.h" // header file containing the class 
#include <iostream> // header file to access the input and output streams library (cout and cin)
using namespace std; // to avoid writing std:: when using cout<< and cin <<

Movie::Movie()  // default contructor function 
{
	Name = ""; 
	MPAA = "";
	ratings[0] = 0; // numbrt of people rating is set to 0 for all ratings 
	ratings[1] = 0; 
	ratings[2] = 0;
	ratings[3] = 0;
	ratings[4] = 0;
}
Movie::~Movie()  // destructor function 
{
}

string Movie::getName() // accessor function for name of movie 
{
	return Name; // get/display name 
}
string Movie::getMPAA() // accessor function for MPAA rating of movie 
{
	return MPAA; // get/display MPAA rating 
}
void Movie::setName(string n)  // mutator function 
{
	Name = n; // sets the name equal to n 
}
void Movie::setMPAA(string m) // mutator dunction 
{
	MPAA = m; // sets the MPAA equal to m 
}
void Movie::addRating(int rate) // function to add ratings to 
{
	switch (rate) // switch statement with the int rate as an expression 
	{
	case 1: // if the rate is 1 
		ratings[0]++; // then increment number of people who gave that rating 
		break; // end 
	case 2:  // if rate is 2 
		ratings[1]++; // then increment number of people who gave that rating 
		break; // end 
	case 3: // if the rate is 3 
		ratings[2]++; // then increment number of people who gave that rating 
		break; // end 
	case 4: // if the rate is 4 
		ratings[3]++;  // then increment number of people who gave that rating 
		break; //end
	case 5:   // if the rate is 5 
		ratings[4]++; // then increment number of people who gave that rating 
		break;   //end 
	}
}

double Movie::getAverage() // function to obtain the average 
{
	return (double)(ratings[0]*1 + ratings[1]*2 + ratings[2]*3 + ratings[3]*4 + ratings[4]*5) / (ratings[0] + ratings[1] + ratings[2] + ratings[3] + ratings[4]);
} // returns the average which is the summation of the people who gave the rating multiplied by the rating vale
  // divded by the summation of people who rated. 