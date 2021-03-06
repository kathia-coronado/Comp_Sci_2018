// Project4_1.cpp : Defines the entry point for the console application.
#include "stdafx.h"  //header file for visual studio.
#include <iostream>  // header file to access the input and output streams library (cout and cin)
#include <string>    // header files to use strings
using namespace std; // to avoid writing std:: when using cout<< and cin <<

struct Date   // a structure named Date 
{			  // declaring the memebers of the Date structure and thier data types 
	int Year;   
	int Month;
	int Day;
};
struct Student  //structure named Student
{				// declaring the members of the Student structure and their data types 
	string FirstName;
	string LastName;
	Date BirthDate; //Nestled structure 
	string PhoneNumber;
	string Major;
};

void SearchLastName(string, Student [],int); // Function prototype: search using student's last name
void SearchBirthYear(int, Student[],int);    //Function prototype: Search using student's birth year

int main()
{
	// A) an instance of the sturcture 
	Student object; // variable of datatype Student
	object.FirstName = "Kathia"; // initializing member fields  for the variable object
	object.LastName = "Coronado";
	object.BirthDate.Year = 1996; // member BirthDate is a nestled structure 
	object.BirthDate.Month = 01; 
	object.BirthDate.Day = 14;
	object.PhoneNumber = "555-555-5555";
	object.Major = "Mechanical Engineering";

	cout << "A) Student Record\n";  // display the contents object variable 
	cout <<"First Name:\t" << object.FirstName << endl //cout-ting all of the field with appropriate labels
		 <<"Last Name:\t" << object.LastName << endl
		 <<"Date of Birth:\t"<< object.BirthDate.Year << "-" << object.BirthDate.Month << "-" << object.BirthDate.Day << endl
		 <<"Phone Number:\t"<< object.PhoneNumber <<endl
		 <<"Major:\t\t"<< object.Major << endl;
	cout << "_______________________________________________________" << endl;
	
	// B) Array of structures 
	const int num = 6; //Size of the array
	Student arr[num]; // arr is an array of size num and of datatype Student 
	// initialization of the memeber fields of the arrat arr in which require strings 
	arr[0].FirstName = "Kathia";    arr[0].LastName = "Coronado";    arr[0].PhoneNumber = "111-111-1111";   arr[0].Major = "Mechanical Engineering";
	arr[1].FirstName = "Steven";    arr[1].LastName = "Hawkins";     arr[1].PhoneNumber = "222-222-2222";   arr[1].Major = "Theoretical Physics";
	arr[2].FirstName = "Fred";      arr[2].LastName = "Flinstones";	 arr[2].PhoneNumber = "333-333-3333";   arr[2].Major = "Archeology";
	arr[3].FirstName = "Spongebob"; arr[3].LastName = "Squarepants"; arr[3].PhoneNumber = "444-444-4444";   arr[3].Major = "Culinary Arts";
	arr[4].FirstName = "Jane";      arr[4].LastName = "Smith";       arr[4].PhoneNumber = "555-555-5555";   arr[4].Major = "Political Science";
	arr[5].FirstName = "Mike";      arr[5].LastName = "Tyson";       arr[5].PhoneNumber = "666-666-6666";   arr[5].Major = "Fitness";

	cout << endl << "B) Student Records Array" << endl;
	for (int i = 0; i < num; i++) // For loop to initialize the  date of birth and to format the  output array 
	{   cout << endl << "Student " << (i + 1) << endl;  // the student number 
		cout << "First Name:\t";    
		cout << arr[i].FirstName; //display name
		cout << endl << "Last Name:\t";  
		cout << arr[i].LastName; // display last name
		cout<< endl << "Date of Birth:\n" 
		    << "\tYear: ";
		arr[i].BirthDate.Year= 1996 - 2*i; //calculation for the year 
		cout << arr[i].BirthDate.Year; //display year
		cout << "\tMonth: ";
	    arr[i].BirthDate.Month= 1+i;   // calculation for the birth month
		cout << arr[i].BirthDate.Month;  //display month
		cout << "\tDay: ";
		arr[i].BirthDate.Day=14-i;   //calculation for the birth day
		cout << arr[i].BirthDate.Day << endl; // display the day
		cout << "Phone Number:\t";
		cout << arr[i].PhoneNumber<<endl;  // display phone number
		cout << "Major:\t";
		cout << arr[i].Major<<endl;  //display Major
	}
	cout << endl << endl;
	cout << "Array of Structures Display:" << endl;
	for (int i = 0; i < num; i++) // loop display array 
	{
		cout << arr[i].FirstName << "\t" << arr[i].LastName << endl
			<< arr[i].PhoneNumber << "\t" << arr[i].BirthDate.Year << "-" << arr[i].BirthDate.Month << "-" << arr[i].BirthDate.Day << endl
			<< arr[i].Major << endl << "____________________________________________________" << endl;
	}
	cout << endl << "_______________________________________________________" << endl;
	// C) Search Array for a student using last name 
	cout << "C) Search Array for a student using last name";
	string Last_Name; // variable to hold the last name that will be used to search through the array
	cout << "Enter the last name of the student: "; // ask for the Last Name
	cin >> Last_Name; // Enter the Last Name 
	SearchLastName(Last_Name, arr, num); // Function Call. Accepts the Last Name that is used to search, the array and the the size of the array as arguements

	cout << "_______________________________________________________" << endl;
	// D) Search Array for student using birth year 
	cout << "D) Search Array for student using birth year";
	int year; // Variable to hold the year used to search forthe student 
	cout << "Enter the birth year of the student: "; // ask for the search year 
	cin >> year; // Enter the search year 
	SearchBirthYear(year, arr, num); // Function call. Accepts the year, the array and the array size as arguements 

	return 0; // end program
} 

void SearchLastName(string search, Student arr[], int num) // C)
{ 
	int j = 1; //flag 

	for (int i = 0; i < num; i++) //Loop that goes through the array 
	{
		if (search == arr[i].LastName) // if the search variable (The lastname) is equal to the lastname member value of the element of an array 
			j = 0; // then j is equal to zero 

		if (j==0) // if j=0 then display the contents of the array element 
		{
			cout << arr[i].FirstName << "\t" << arr[i].LastName << "\t" << arr[i].PhoneNumber << "\t"
				 << arr[i].BirthDate.Year << "-" << arr[i].BirthDate.Month << "-" << arr[i].BirthDate.Day << "\t"
				 << arr[i].Major << endl;
			return;// return to main function
		}
	}
	cout << "NO MATCH :("<<endl; // if no matches then then display no match 
	return;// return to main function 
}

void SearchBirthYear(int search, Student arr[],int num)   // D)
{
	int j = 1; //flag 

	for (int i = 0; i < num; i++)//Loop that goes through the array 
	{
		if (search == arr[i].BirthDate.Year)// if the search variable (year) is equal to the year member value of the element of an array
		{
			j = 0; // then j is equal to 0
		}
		if (j == 0) // if j is equal to 0 then displat the contenets of the array element
		{
			cout << arr[i].FirstName << "\t" << arr[i].LastName << "\t" << arr[i].PhoneNumber << "\t"
				<< arr[i].BirthDate.Year << "-" << arr[i].BirthDate.Month << "-" << arr[i].BirthDate.Day << "\t"
				<< arr[i].Major << endl;
			return; // return to the main function 
		}
	}
	cout << "NO MATCH :(" << endl; // if no matches then then display no match 
	return;// return to main function 
}
