#include <iostream>    // header file to access the input and output streams library (cout and cin)
#include <string>      // header files to use strings
using namespace std;   // to avoid writing std:: when using cout<< and cin <<

class Triangle // creates a class with class name Triangle 
{ // declarations
	// private:    // declaration of private members 
	double height; 
	double base;
	string name;
public:                   // declaration of public members
	void setValues(double a, double b); // mutator function will set the values a and b to the base and height
	void setName(string s);             // mutator function will set the value s to name 
	void getValues() const;			    // accessor function will display the Values of base and height 
	void getName() const;			    // accessor function will display the name 
	double getArea() const;			    // accessor function will calculate the triangles area 
};

void Triangle::getValues() const  //accessor function
{
	cout << "Base: " << base << endl;     //display value of base
	cout << "Height: " << height << endl; // display value of height
}
void Triangle::getName() const  //accessor function
{
	cout << "Name: " << name << endl;  // display the name 
}
double Triangle::getArea() const  //accessor function
{
	return (0.5*base*height);  // returns the value of the area of the triangle
}
void Triangle::setValues(double a, double b)  //mutator function
{
	height = a; // sets a equal to height
	base = b;    // sets b equal to base
}
void Triangle::setName(string s)    //mutator function
{
	name = s;   //sets s equal to name
}

int main()
{
	Triangle tri; // tri is an object, an instance of the Triangle class
	double b, h;   // declare variables of data type double
	string n;       //declare variable of datatype string
	// Part b1:declare object, initalize and display.
	cout << "Triangle 1:::::::::::::::::::::::::::" << endl;
	cout << "What is the triangle's name?  ";
	cin >> n;                                //user intputs name value 
	cout << "what is its height?  ";
	cin >> h;								// user intputs height value 
	cout << "what is its base?  ";
	cin >> b;								// user intputs base value 

	tri.setName(n);    //call mutator function will set the name equal to the user input
	tri.setValues(h, b); // call mutator function, sets the height and base equal to user input
	//tri.getArea();		// call accessor function, will calculate 
	cout << endl << "Your Data Input:" << endl; 
	tri.getName();		//call accessor function, will diplay the name 
	tri.getValues();	//call accessor function, will display values of height and weight
	cout << "The Triangle's Area is "<< tri.getArea() << endl<<endl; // call the acessor function will cout 
	// the value of the User's triangle

	//Part b2: ptr to dynamically allocate data
	cout << "Triangle 2:::::::::::::::::::::::::::" << endl;
	
	Triangle *triptr = nullptr;      //Define a Triangle pointer 
	triptr = new Triangle; // dynamicallt allocate a Triangle object
	
	Triangle tri2; //declare an another instance of the Triangle class
	double b2, h2;  // declare variables of data type double
	string n2;        //declare variable of datatype string
	cout << "What is the triangle's name?  ";
	cin >> n2;					//user intputs name value 
	cout << "what is its height?  ";
	cin >> h2;					// user intputs height value 
	cout << "what is its base?  ";
	cin >> b2;					// user intputs base value 
	
	triptr->setName(n2);  // Store values in the object's name 
	triptr->setValues(h2, b2);   // Store values in the object's bas and height
	cout << endl << "Your Data Input:" << endl;
	triptr->getName();  //access the name data
	triptr->getValues(); //acess the base and height data 
	cout << "The Triangle's Area is " << triptr-> getArea() << endl << endl; //acess the area data 

	delete triptr;           // delete the object from memory
	triptr = nullptr;        // pointer will point to the 0 address again 

	system("pause");
	return 0; //end program
}