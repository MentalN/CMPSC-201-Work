// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #3A
// Converting percentage grade to letter grade

#include <iostream>
using namespace std;

int main ()
{
	int letterGrade;
	cout << "Welcome to P2L grade converter, aka bad news." << endl;
	cout << "please enter your percent grade ";
	cin >> letterGrade;
	
	
	
	//Grading is based on the syllabus//
	
	if (letterGrade > 93)
		cout << "Your letter grade is A";
	else if (letterGrade > 90)
		cout << "Your letter grade is A-";
	else if (letterGrade > 87)
		cout << "Your letter grad is B+";
	else if (letterGrade > 83)
		cout << "Your letter grad is B";
	else if (letterGrade > 80)
		cout << "Your letter grad is B-";
	else if (letterGrade > 75)
		cout << "Your letter grad is C+";
	else if (letterGrade > 70)
		cout << "Your letter grad is C";
	else if (letterGrade > 60)
		cout << "Your letter grad is D";
	else if (letterGrade < 60)
		cout << "Your letter grad is F";
		

}


/* Sample output (test cases for every letter grade)


Welcome to P2L grade converter, aka bad news.
please enter your percent grade 95
Your letter grade is A
--------------------------------
Process exited after 3.034 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 91
Your letter grade is A-
--------------------------------
Process exited after 3.162 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 89.9
Your letter grad is B+
--------------------------------
Process exited after 5.576 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 85
Your letter grad is B
--------------------------------
Process exited after 2.233 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 82
Your letter grad is B-
--------------------------------
Process exited after 2.378 seconds with return value 0
Press any key to continue . . .




Welcome to P2L grade converter, aka bad news.
please enter your percent grade 78
Your letter grad is C+
--------------------------------
Process exited after 6.599 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 71
Your letter grad is C
--------------------------------
Process exited after 2.607 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 65
Your letter grad is D
--------------------------------
Process exited after 2.04 seconds with return value 0
Press any key to continue . . .



Welcome to P2L grade converter, aka bad news.
please enter your percent grade 58
Your letter grad is F
--------------------------------
Process exited after 3.334 seconds with return value 0
Press any key to continue . . .



*/
