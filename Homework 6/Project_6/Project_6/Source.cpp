#include <iostream>  // header file to access the input and output streams library (cout and cin)
#include <string>    // header files to use strings
#include "Movie.h"  // header file containing the class 
using namespace std; // to avoid writing std:: when using cout<< and cin <<

int main()
{
	Movie MovieArr[3]; /*= { Movie("COCO ","PG"), Movie("The Ring ", "PG-13"), Movie("The Hangover ", "R") };*/
	MovieArr[0].setName("COCO"); // give a name to the first element of the MovieArr array using setName function 
	MovieArr[0].setMPAA("PG");   // give a MPAA rating to the first element of the MovieArr array using setName function 
	MovieArr[1].setName("The Ring");   // give a name to the second element of the MovieArr array using setName function 
	MovieArr[1].setMPAA("PG-13");   // give a MPAA rating to the second element of the MovieArr array using setName function 
	MovieArr[2].setName("The Hangover"); // give a name to the third element of the MovieArr array using setName function 
	MovieArr[2].setMPAA("R"); // give an MPAA rating to the third element of the MovieArr array using setName function 
	cout << "Viewer ratings for movies are 1, 2, 3, 4, and 5" << endl;
	cout << "1=Terrible, 2=Bad, 3=Ok, 4=Good and 5=Great.\nEnter Five ratings each of the 3 movies.\n\n";
	int rates[5];  // holds the scores 

	while (1) // infinte loop to get the the scores for the first movie 
	{
		int j = 0; // j indicates that it is the first movie 
		for (int i = 0; i < 5; i++) // for loop to obtain the scores from the user 
		{
			//int j = 0;
			cout << "Person " << i + 1 << " gives COCO a MPAA rating of: "; 
			cin >> rates[i]; // user enters the scores 
			if (rates[i] < 1 || rates[i]>5) // if user inputs values outside of range 
			{
				cout << "\nERROR! Re-enter Rating Values from the 1 to 5 range \n" << endl; // display error message 
				i--; // decrease counter by 1 to re ask for the score 
			}
			else  // if within the range 
				MovieArr[j].addRating(rates[i]); // then add the rating to the array element
		}
		break; // end while loop
	}
	cout << endl; // new line 

	while (1) // infinte loop to get the the scores for the 2nd movie 
	{
		int j = 1; // j indicates that it is the 2nd movie 
		for (int i = 0; i < 5; i++) // for loop to obtain the scores from the user 
		{
			//int j = 1;
			cout << "Person " << i + 1 << " gives The Ring a MPAA rating of: ";
			cin >> rates[i]; // user enters the scores 
			if (rates[i] < 1 || rates[i]>5) // if user inputs values outside of range 
			{
				cout << "\nERROR! Re-enter Value from 1 to 5\n" << endl; // display error message 
				i--;         // decrease counter by 1 to re ask for the score
			}
			else   // if within the range 
				MovieArr[j].addRating(rates[i]);   // then add the rating to the array element
		}
		break;  // end while loop
	}
	cout << endl; // new line 

	while (1) // infinte loop to get the the scores for the 3rd movie 
	{
		int j = 2;    // j indicates that it is the 2nd movie 
		for (int i = 0; i < 5; i++)    // for loop to obtain the scores from the user 
		{
			//int j = 2;
			cout << "Person " << i + 1 << " gives The Hangover a MPAA rating of: ";
			cin >> rates[i];    // user enters the scores 
			if (rates[i] < 1 || rates[i]>5)  // if user inputs values outside of range 
			{
				cout << "\nERROR! Re-enter Value from 1 to 5\n" << endl; // display error message 
				i--;      // decrease counter by 1 to re ask for the score
			}
			else     // if within the range 
				MovieArr[j].addRating(rates[i]);    // then add the rating to the array element
		}
		break;     // end while loop
	}
	cout << endl;   // new line 

	// display the movie details
	cout << "Movie Name: " << MovieArr[0].getName() << endl;  //display the name of the movie using accessor function 
	cout << "MPAA Rating: " << MovieArr[0].getMPAA() << endl; // display rating using accessor function 
	cout << " Average Viewer's Rating: " << MovieArr[0].getAverage() << endl << endl; // display the average using the accessor function getAverage

	cout << "Movie Name: " << MovieArr[1].getName() << endl;   //display the name of the movie using accessor function 
	cout << "MPAA Rating: " << MovieArr[1].getMPAA() << endl;    // display rating using accessor function 
	cout << "Average Viewer's Rating: " << MovieArr[1].getAverage() << endl << endl;  // display the average using the accessor function getAverage

	cout << "Movie Name: " << MovieArr[2].getName() << endl;    //display the name of the movie using accessor function 
	cout << "MPAA Rating: " << MovieArr[2].getMPAA() << endl;     // display rating using accessor function 
	cout << "Viewer's Rating: " << MovieArr[2].getAverage() << endl << endl;  // display the average using the accessor function getAverage

	for (int i = 0; i < 3; i++) // for all three elements in the array
	{
		MovieArr[i].~Movie();  // destructor function to destroy each element of the object array
	}

	system("pause"); //pause 
	return 0;   // end program 
}

