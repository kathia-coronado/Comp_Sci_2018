/* Project2_1.cpp : Defines the entry point for the console application.
   The purpose of this this problem was to create a program that takes 10 integers between
   0 and 99 from the user. The program will then count the occurance of each number using arrays.
*/

#include "stdafx.h"    //file for visual studio.
#include <iostream>    // header file to access the input and output streams library (cout and cin)
using namespace std;   // to avoid writing std:: when using cout<< and cin <<

int main() //main() function.
{
	const int q = 10, range = 100; //constant vairables for array sizes 
	int user[q]; // array of the numbers that the user inputs 
	int count[range]; // array that holds the occurances of the input numbers 
	int repeat[range]; // array used to check which numbers are repeated 
	int k = 0, num;

	cout << "Please enter 10 integers between 0 and 99" << endl; // ask user to input numbers 
	int i = 0; // initialize variable 
	// get the numbers from the user 
	for (i = 0; i < q; i++) // loop so that the user initializes the the user array. 
	{
		cout << "Number " << (i + 1) << ": "; // formatting. i+1 describes which out of the 10 numbers it is 
		cin >> num; // user inputs numbers 
		if (num < 0 || num >(range - 1)) // input outside of the desired range 
		{
			cout << "Enter only values between 0 and 99" << endl; // error message 
			i--; // re-enter an appropriate value 
		}
		else // if in the desired range
			user[i] = num; // the array element is equal to the input number 
	}

	int hold; // will hold the value 
	for (i = 1; i < q; i++) // get the numbers in order 
	{
		for (int y = 0; y < (q - 1); y++) //  loop for the subcripts goes from y= 0 to 9 
		{
			if (user[y] > user[y + 1]) //if the current number is greater than the next number 
			{
				hold = user[y]; // hold is equal to the current number 
				user[y] = user[y + 1]; // the next number takes the place of the current 
				user[y + 1] = hold; // 
			}// loop continues until the end of the user array and produces a list of the numbers in order 
		} // from least to greatest
	}

	for (int i = 0; i < q; i++) // loop from i=0 to 9 
	{
		int j; // declare variable 
		for (j = 0; j < i; j++)  //loop for the values in the array
			if (user[i] == user[j]) //if 
				break; //stop 
		if (i == j) //If the element was not printed before
		{
			repeat[k] = user[i]; //print the element
			k++; //increase k
		}
	}
	for (int i = 0; i < 10; i++)//loop from i=0 to 9. to count the occurances 
		count[i] = 0; 
	int size = k; // declare variable 
	for (int i = 0; i < size; i++) //Check the occurences of the elements in the array.
	{
		for (int j = 0; j < q; j++) // loop j=0 to 9
		{
			if (repeat[i] == user[j]) // if the number is repeated 
				count[i]++; // coount it 
		}
	}
	for (int i = 0; i < size; i++) // displays the occurances of each number
	{
		if (count[i]>1) // if occurs more than once
			cout << repeat[i] << " occurs " << count[i] << " times." << endl; // display times
		else           // if occurs one time 
			cout << repeat[i] << " occurs " << count[i] << " time." << endl; // display time

	}
	return 0; // end program 
}
