#include"Students.h"
using namespace std;

//Implementation of class. Showing the functionalities of class. Interconnecting the interface and implementation using scope resolution operator(::)

//Default constructor
student::student() {
	cout << "No information Provided\n" << endl;
}

//Parameterized constructor
student::student(string n, int r, float g, int a) {
	name = n;
	rollNo = r;
	gpa = g;
	age = a;
}

//Function created for displaying the data
void student::display(string n, int r, float g, int a) {
	name = n;
	rollNo = r;
	gpa = g;
	age = a;

	cout << "Student's Information" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Roll No: " << rollNo << endl;
	cout << "GPA: " << gpa << endl;
}

//Another Function created for calculating grades on the basis of gpa
void student::grades(){
	if (gpa <= 4 && gpa >= 3.7) {
		cout << "Grade: A" << endl;
	}
	else if (gpa < 3.7 && gpa >= 3.3) {
		cout << "Grade: A-" << endl;
	}
	else if (gpa < 3.3 && gpa >= 3) {
		cout << "Grade: B+" << endl;
	}
	else if (gpa < 3 && gpa >= 2.7) {
		cout << "Grade: B" << endl;
	}
	else if (gpa < 2.7 && gpa >= 2.3) {
		cout << "Grade: B-" << endl;
	}
	else if (gpa < 2.3 && gpa >= 2) {
		cout << "Grade: C+" << endl;
	}
	else if (gpa < 2 && gpa >= 1.7) {
		cout << "Grade: C" << endl;
	}
	else if (gpa < 1.7 && gpa >= 1.3) {
		cout << "Grade: D" << endl;
	}
	else if (gpa < 1.3) {
		cout << "Grade: F" << endl;
	}
}

//calling distructor
student::~student() {
	cout << "\nInformation removed" << endl;
}