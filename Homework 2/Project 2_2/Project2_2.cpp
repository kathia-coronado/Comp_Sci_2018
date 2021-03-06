// Project2_2.cpp : Defines the entry point for the console application.
/* The purpose of this program was to design a function that accepts an array of the grades of 10
 students. the functioon gets the best score and then assigns a letter grade based on grading rubrik
 The program asks the user to enter the 10 scores 
*/
#include "stdafx.h"  //file for visual studio.
#include<iostream>   // header file to access the input and output streams library (cout and cin)    
using namespace std;   // to avoid writing std:: when using cout<< and cin <<

void grade(int[], int); // function prototype. Function to give letter grade. It accepts one integer array and one integer variable. 

int main()
{
	const int STUDENT = 10; // declare constant for array size 
	int score[STUDENT]; // declare array to hold student scores 

	cout << "Enter the Scores of the 10 students:\n"; // ask for student scores 
	for (int i = 0; i < STUDENT; i++) // loop through each array element to input scores 
	{
		cout << "Student " << (i + 1) << " score: ";
		cin >> score[i];     // user inputs student's score 
	}

	cout << endl;   // new line 

	for (int i = 0; i < STUDENT; i++) // loop through each array to display student grades 
	{
		cout << "Student " << (i + 1) << " score is " << score[i]
			<< " and grade is ";
		grade(score, i); // call function grade 
		cout << endl;  // new line 
	}
	return 0;  // end program 
}

void grade(int score[], int i) // fucntion header 
{
	int best; // hold highest value
	char grade; // declare grade a character 
	best = score[0]; // best is equal to the first array element 
	for (int i = 1; i < 10; i++) // loop to get the best score 
	{
		if (score[i] > best) // if the current score is greater than the best score 
			best = score[i]; // best score is equal to current score 
	}
	// if statement to curve scores and obtain grade 
	if (score[i] >= best - 10)  // if score is greater than or equal to best-10 
		grade = 'A'; // grade is A 

	else if (score[i] >= best - 20)  // if score is greater than or equal to best-20 
		grade = 'B';  // grade is B

	else if (score[i] >= best - 30)  // if score is greater than or equal to best-30 
		grade = 'C'; // grade is C

	else if (score[i] >= best - 40)  // if score is greater than or equal to best-40 
		grade = 'D';  // grade is D

	else     // anything lower 
		grade = 'F'; // grade is F

	cout << grade; // display grade 
}
