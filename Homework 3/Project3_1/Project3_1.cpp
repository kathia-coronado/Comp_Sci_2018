// Project3_1.cpp : Defines the entry point for the console application.
/*
The purpose of this project was to create a program that takes each element in an array and computes
the sum of the remainders for each element divided by 2,3,4. The program then prits the results using 
pointers, not by creating a new array or variable.
*/

#include "stdafx.h" //header file for visual studio.
#include <iostream> // header file to access the input and output streams library (cout and cin)
using namespace std;// to avoid writing std:: when using cout<< and cin <<

int main() //main function 
{
	const int size = 10; // size of array
	int A[size] = { 11,12,13,14,15,16,17,18,19,20 }; // declared array
	int* ptr; // pointer that points to the data type int
	int i; // counter variable
	
	for (i = 0;i < size;i++) // for loop from 0 to 9 to go through the elements of the array. 
	{
		cout << "The element of the array A is " << A[i]; // display the element of the array
		ptr = &A[i]; //store the address of the array A in ptr
		//perform sum of the remainders for the element divided by 2,3 and 5 to the contents of A
		*ptr = A[i] % 5 + A[i] % 3 + A[i] % 2; 
		cout <<" and the result is "<< *ptr << endl;// display the result
	}
	return 0; // end program
}