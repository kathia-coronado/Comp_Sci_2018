/* Project1_1.cpp : Boolean Function 
The purpose of this program was to create a function, isPrime(), that would tell the user which
numbers, from 100 to 200, are or are not prime.
*/
#include "stdafx.h"
#include <iostream> // header to access the input and output streams library (cout and cin)
using namespace std; // to avoid writing std:: when using cout<< and cin <<

// function prototype. This allows the the function to be called in main() before it is defined
bool isPrime(int num);

int main()
{
	// loop so that integers from 100 to 200 analyzed to dicern whether or not they are prime
	for (int Val = 100; Val <= 200; Val++)  // from 100 to 200 increasing by 1
	{
		if (isPrime(Val) == true) //if number is prime 
			cout << Val << " is a prime number.\n"; // then this message is displayed 
		else // if the number is not prime
			cout << Val << " is NOT a prime number.\n"; // then this message is displayed 
	}
	return 0; // end 
}

bool isPrime(int num) // funtion that returns a boolean value
{
	bool status; // boolean variable. Holds results of isPrime() 
				 // loop from 2 to the value of the number increasing by 1
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) // if the remainder of the quotient of the number divided by i yeilds 0
		{
			status = false; // then the number is not prime 
			break; // terminates the loop 
		}
		else //if the remainder of the quotient of the number divided by i yeilds not 0
			status = true; // then the number is prime 
	}
	return status; // the value of status (true or false) is returned to the main function 
}