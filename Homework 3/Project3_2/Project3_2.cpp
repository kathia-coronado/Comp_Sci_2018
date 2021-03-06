// Project3_2.cpp : Defines the entry point for the console application.
/*
Thep purpose of this project was to create a function that accepts an array and its size
arguements and then creates a copy of the array with the element values in reverse order. 
The function returns a pointer to the new array.
*/

#include "stdafx.h" //header file for visual studio.
#include <iostream> // header file to access the input and output streams library (cout and cin)
using namespace std;// to avoid writing std:: when using cout<< and cin <<

int* Reverse(int[], int);// Function prototype for function that returns pointer 

int main() // main function 
{
	int const size = 9; // size of array
	int ARR[size] = { 3,5,7,9,11,13,15,17,19 }; // contents of the array
	int i; // counter variable 
	
	cout << "The original array is:\n"; 
	for (i = 0; i<size; i++) // loop to display the elements, from 0 to 8, for the originalarray
		cout << ARR[i] << " ";// display element by element 
	cout << endl; // end the line after displayingthe contents of the array, after loop ends 

	int *ReverseArray = Reverse(ARR, size); //Array pointer is equal to the output of the reverse function 

	cout << "The reversed array is:\n";
	for (i = 0; i<size; i++) // loop to display the contents of the reversed array 
		cout << ReverseArray[i] << " ";// output the contents of the array element by element
	cout << endl;// end the line after displaying the array 

	return 0; // end program 
}

int* Reverse(int ARR[], int size) // function that retruns pointer
{
	int i; // counter variable 
	int *copy = new int[size];// pointer. creates memory to hold an integer value pointed by copy
	for (i = 0; i<(size); i++) // loop to reverse the array element by element 
		copy[i] = ARR[size - i -1]; // copy stores the array in the reversed order
	
	return copy; // return the pointer copy to the main function
}