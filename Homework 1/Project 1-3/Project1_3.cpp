/* Project1_3.cpp :
The purpose of this program was to display the triangle, below, using recursive functions
1 
121
12321 
1234321
123454321
12345654321
In this project 6 rows are printed 
*/
#include "stdafx.h"
#include <iostream> // Header to access the input and output streams library (cout and cin)
//#include <iomanip> // Header to access the setw() function, used for formatting the triangle into a pyramid
using namespace std;  // Avoid writing std::when using cout << and cin <<

void Triangle(int);  //Function prototype. It takes one input of data type int
void PrintRow(int, int); // function prototype. It takes two inputs of data type int 

int main()
{
	cout << "\nThis is a triangle with 6 rows; produced via recursion.\n\n"; // description
	int rows = 6; // number of rows in the triangle 
	Triangle(rows);	// calling the void function 
	return 0; // end program 
}
void PrintRow(int start, int fin ) // function to print the numbers in the rows  
{
	if (fin == start) // Base case 
	  cout << fin;   // if the row and the column are equal then print the value of the row. 
	                 //i.e. (5,5) 5 would be printed and this would be the value displayed in the middle of the row
	else    // recursive case  
	{
        /*
		//-----------------------------------------------------------------------------------------------------------------------------------------
		//to display the triangle in the correct format, a pyramid--------------------------------- 
		int j = 10;  // initialize the variable j equal to 10
		for (int i = 0; i <= fin; i++) // loop increase the 
			j--; // decrease the value of j by 1 with each iteration 
		if (start == 1) // if the column of the row is 1 
		{
			cout << setw(start + j); // then displace it by 1+j.
		}   // j is decreased with each iteration; this results in the top of the triangle being more displaced to the right than the bottom 
        //-------------------------------------------------------------------------------------------------------------------------------------------
	   */
	    cout << start; // print the number of the value of the column. i.e. PrintRow(2,5) prints 2 in column 2 of row 5
	    int k = start + 1;
	    PrintRow(k, fin); // the function calls itself increasing the row by 1. therefore after PrintRow(2,5) is PrintRow(3,5)
	    cout << start; //Produces the descending number portion of the triangle
	                 //prints the previous number i.e. PrintRow(start+1,fin)=PrintRow(3,5) then start=2
	}
}

void Triangle(int line) // recursive function to get each line of the triangle 
{
	if (line == 1) // Base Case 
	    {          // for the first row display 1. 
	  cout << 1;   
	    }
	else   // recursive case 
	{
		Triangle(line - 1); //The function calls itself. it will now run for the line above i.e Triangle(6) is the base, next will be Triangle(5) the row above
		PrintRow(1, line);  //The function calls the print row function. with the values (1, line)
	}                       // 1 represents the 1st column and line represents the row inwhich Triangle() is evaluating
	cout << endl; // ends that line or row; goes to the next one.
}
