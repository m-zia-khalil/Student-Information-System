#include"Students.h"
using namespace std;

int main() {

	//Creating objects
	student s1;
	student s2;

	//Calling object
	s1.display("Zia", 17, 3.1, 19);
	cout << endl;
	s1.grades();
	cout << endl;

	s2.display("Zia", 17, 2.4);
	cout << endl;
	s2.grades();
	cout << endl;

	system("pause");
	return 0;
}