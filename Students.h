#include<iostream>
#include<string>
using namespace std;

//This is just for interface. Only class is created

class student {

private:
	string name;
	int age;
	int rollNo;
	float gpa;
	//Data or variables are encapsulated, So that everyone cannot access it directly
	//Abstraction is also applied there. So, No one can see the private data

public:
	student();
	student(string n, int r, float g, int a = 18);
	//Constructor craeted

	void display(string n, int r, float g, int a = 18);
	void grades();

	//Destructor created
	~student();
};

