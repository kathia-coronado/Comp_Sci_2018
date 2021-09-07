#include <string>
using namespace std;

#ifndef EMPLOYEE_H // if the header employee is not defined 
#define EMPLOYEE_H // then define it this way

class Employee // parent class 
{
  // private member variables of the parent class 
	string name; 
	string office; 
	int salary; 
	string phoneNumber;
	string email;
 public: // public member functions 
	Employee(string n, string phN, string e, string o, int s); //contructor 
	Employee(string o, int s); // constructor 
	Employee(); // default constructor 
	~Employee(); // destructor 
	string getOffice(); // accessor function for office 
	void setOffice(string o); // mutator function for office 
	int getSalary(); // accessor functiion for salary
	void setSalary(int s); //mutator function for salary
	void printInfo(); // function that displays all of the employee info 
};


class Faculty: public Employee // child class of employee 
{
	//private members 
	string department;
	string rank;
public: // public member functions 
	Faculty(string n, string phN, string e, string o, int s, string d, string r); // constructor 
	Faculty(string d, string r);// constructor 
	~Faculty(); // destructor
	string getDepartment(); // accessor function for department 
	void setDepartment(string d); // mutator function for department
	string getRank(); // accessor function for rank
	void setRank(string r);// mutator function for rank 
	void printInfo(); // function that displays all of the employee info 
};

class Staff : public Employee
{
	//private member
	string title;
 public: // public member function 
	Staff(string n, string phN, string e, string o, int s, string t); // constructor 
	Staff(string t); // default constructor 
	~Staff(); // destructor 
	string getTitle(); // accessor function for 
	void setTitle(string t); //mutator function for title
	void printInfo(); // function that displays all of the employee info 
};

#endif // !EMPLOYEE_H   // end the if statement 
