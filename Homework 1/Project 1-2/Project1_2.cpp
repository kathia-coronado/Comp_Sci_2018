/* Project1_2.cpp : Overloading Functions
 The purpose of this program was to overloaded the function max().
 In this project the user is asked to define either 2 or 3 floating point
 numbers. Based on the users choices, the max() function is employed to 
 determine which of the numbers is the maximum.
*/

#include "stdafx.h"
#include <iostream> // Header to access the input and output streams library (cout and cin)
using namespace std; // Avoid writing std:: when using cout<< and cin <<

// Function prototypes. This allows the the functions to be called in main() before it is defined
double max(double, double); // Accepts two numbers of data type double 
double max(double, double, double); // Accepts three numbers of data type double 

int main()
{
	int n; // Holds the user's choice of either 2 or 3 number input
	double num1, num2, num3; //Holds the values of the numbers that the users inputs 
	cout << "Please enter the amount of numbers you want to compare (2 or 3).\n"; // Choice of 2 or 3 numbers to be compared 
	cin >> n; // User'S choice 

	if (n==2 || n==3)
	{
		if (n == 2) // Compare 2 numbers 
		{
			cout << "Please Enter two floating point numbers,\n" //Ask for the two numbers being compared 
				 << "and I'll tell you which is the maximum.\n";
			cin >> num1 >> num2; //User inputs the two numbers 
			cout << "Of the numbers " << num1 << " and " << num2 << ", " // Call max function to decide which is the maximum 
				 << "the largest is " << max(num1, num2)<< '\n';
		}
		else if (n == 3) // Compare 3 numbers 
		{
			cout << "Please Enter three floating point numbers,\n"//Ask for the two numbers being compared
				 << "and I'll tell you which is the maximum.\n";
			cin >> num1 >> num2 >> num3;//User inputs the two numbers 
			cout << "Of the numbers " << num1 << ", " << num2 << " and " << num3 << ", "// Call max function to decide which is the maximum 
				 << "the largest is " << max(num1, num2, num3)<< '\n';
		}
	}
	else // if the user inputs any number other than 2 or 3 
	{
		cout << " That is not an option, please enter either 2 or 3.\n"; // error message 
	}
	return 0; // end of  program
}

double max(double num1, double num2) // function compares two numbers 
{
	if (num1 > num2) // if num1 is greater than num2
		return num1; // then num1 is the maximum
	else             // if num2 is greater than num1
		return num2; // then num2 is the maximum
}

double max(double num1, double num2, double num3) // function compares three numbers 
{
	if (num1 > num2 && num1 > num3) // if num1 is greater than both num2 and num3
		return num1;                // then num1 is the maximum 
	else if (num2 > num1 && num2 > num3) // if num2 is greater than both num1 and num3
		return num2;                     // then num2 is the maximum 
	else              // if num3 is greater than both num2 and num1
		return num3;  // then num3 is the maximum 
}
