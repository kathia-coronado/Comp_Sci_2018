#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main()
{
	//Employee obj("Jennifer Lopez", "718-889-9988", "J.LO@gmail.com", "Leo 235", 1500000);
	Faculty obj1("Bruce Lee","718-555-5555","Burce.Lee@gmail.com","Leo 236", 1950000,"Computer Science", "1"); 
	// object of data type faculty inititalaized using constructor 
	Staff obj2("Al Pacino", "718-999-9999", "Al.Pacino01@gmail.com", "Leo 237", 2000000, "President");
	// object of datatype staff initialized using constructor 

	//obj.printInfo();
	obj1.printInfo(); // display all of the information for object 
	obj2.printInfo(); // display all of the information for the object 

	system("pause"); 
	return 0; // end program
}
