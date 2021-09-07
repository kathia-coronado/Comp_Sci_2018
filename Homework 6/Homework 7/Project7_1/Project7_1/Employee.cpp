#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string n, string phN, string e, string o, int s) // constructor function for employee 
{
	name = n;
	phoneNumber = phN;
	email = e;
	office = o;
	salary = s;
}
Employee::Employee(string o, int s) // overloading constructor for emplyoee 
{
	office = o;
	salary = s;
}
Employee::Employee() // default constructor for employee 
{
	name = "";
	phoneNumber = "";
	email = "";
	office = "";
	salary = 0;
}
Employee::~Employee() // destructor for emplyoee 
{
}
string Employee::getOffice() // accesor function 
{
	return office; // display the value for office 
}
void Employee::setOffice(string o) // mutator function 
{
	office = o; // set office equal to o 
}
int Employee::getSalary()    // accesor function  
{
	return salary; // display salary 
}
void Employee::setSalary(int s) // mutator function 
{
	salary = s; // set salary equal to s 
}
void Employee::printInfo() // display all of the information 
{
	cout << "NAME = " << name << endl;
	cout << "PHONE NUMBER = " << phoneNumber << endl;
	cout << "EMAIL = " << email << endl;
	cout << "OFFICE = " << office << endl;
	cout << "SALARY = $" << salary << endl;
	//cout << endl;
}


Faculty::Faculty(string n, string phN, string e, string o, int s, string d, string r):Employee( n, phN,  e,  o,  s) //overloading constructor for faculty with access to the employee constructor  
{
	department = d;
	rank = r;
}
Faculty::Faculty(string d, string r) //overloading constructor 
{
	department = d;
	rank = r;
}
Faculty::~Faculty() // destructor 
{

}
string Faculty::getDepartment() // accesor function 
{
	return department; // desplays the department 
}
void Faculty::setDepartment(string d) // mutator function 
{
	department = d; // set department equal to d 
}
string Faculty::getRank() // accesor function 
{
	return rank; // display rank 
}
void Faculty::setRank(string r) // mutator function 
{
	rank = r; // set rank equal to r
}
void Faculty::printInfo() // display all of the information 
{
	Employee::printInfo(); // calling the printinfo function from employee to print out the 5 valaues that are common between employee and faculty 
	cout << "DEPARTMENT = " << department << endl;
	cout << "RANK = " << rank << endl;
	cout << endl;
}


Staff::Staff(string n, string phN, string e, string o, int s, string t) :Employee(n, phN, e, o, s) // overloading constructor for staff with access to the employee constructor  
{
	title = t;
}
Staff::Staff(string t) // overloading consttructor 
{
	title = t; 
}
Staff::~Staff() // destructor 
{

}
string Staff::getTitle() // accessor 
{
	return title; // display title 
}
void Staff::setTitle(string t) //  detter function 
{
	title = t; // set title equal to t 
}
void Staff::printInfo() // displays all of the information for the staff 
{
	Employee::printInfo(); // calling the printinfo function from employee to print out the 5 valaues that are common between employee and staff
	cout << "Title = " << title << endl;
	cout << endl;
}
