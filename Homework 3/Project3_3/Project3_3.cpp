// Project3_3.cpp : Defines the entry point for the console application.
/*
The purpose project was to create two overloaded functions sawpnum in order to swap two integers
without temperary variables.
Part A did this using pointers 
Part B did this using reference variables 
*/

#include "stdafx.h" //header file for visual studio.
#include <iostream> // header file to access the input and output streams library (cout and cin)
using namespace std;// to avoid writing std:: when using cout<< and cin <<

void swapnum(int *, int *); // function prototype for function that takes two pointers 
void swapnum(int &, int &); // function prototype for function that 

int main()
{
	int x; // variable x 
	int y; // variable y 

    /* --------------------------------------------------------------------------------*/
	cout << "input two integers: "; //instructions 
	cin >> x >> y;              // user inputs the values of x and y 
	cout << "Before swapping: "<< endl;
	cout << "x=" << x << endl << "y=" << y << endl; // values of x and y before swapping them 
	swapnum(&x, &y); // call swapnum function by using address
	cout << "After swapping: "<< endl;
	cout << "x= " << x << endl << "y= " << y << endl; // display the values after swapping 

	/* -------------------------------------------------------------------------------*/
	cout << "input two integers: "; // instructions 
	cin >> x >> y;              // user inputs the values of x and y 
	cout << "Before swapping: "<< endl;
	cout << "x= " << x << endl << "y= " << y << endl; // values of x and y before swapping them 
	swapnum(x, y);  // call swapnum function by using  reference
	cout << "After swapping: "<<endl;
	cout <<"x= "<< x << endl<< "y= " << y << endl; // display the values after swapping 
}

void swapnum(int *x, int *y) // swap using pointers 
{ // swap the function without temperary variables using the bitwise exclusive operator
	*x = *x ^ *y;  //x = x+y
	*y = *x ^ *y;  //y = x+y+y = x
	*x = *x ^ *y;  //x = x+y+x = y
}

void swapnum(int &x, int &y) // swap using reference variables 
{// swap the function without temperary variables using the bitwise exclusive operator
	x = x ^ y;  //x = x+y
	y = x ^ y;  //y = x+y+y = x
	x = x ^ y;  //x = x+y+x = y
}