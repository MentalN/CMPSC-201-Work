// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-04-16
// HW #1A
// Program that converts miles into kilometers

#include <iostream>
using namespace std;

int main ()
{
	double miles, Kilometer;
	
	cout << "Welcome to SI Units Chum" << endl;
	
	cout << "Please Enter number of miles to be converted into kilometers";
	cin >> miles;
	Kilometer = miles * 1.60934;
	
	cout << miles << " miles = " << Kilometer << " Kilometer";
	
	return 0;
	
}

/* Sample Output (test cases)

Input: 2
Output:
2 miles = 3.21868 Kilometer



Input: 30
Output:
30 miles = 48.2802 Kilometer


Input: 5.7
Output:
5.7 miles = 9.17324 Kilometer
*/


