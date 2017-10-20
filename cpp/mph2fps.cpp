// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-04-16
// HW #1B
// Program that converts miles per hour into foot per second

#include <iostream>
using namespace std;

int main ()
{
	double MPH, FootPerSecond;
	
	cout << "Greetings!" << endl;
	
	cout << "Please input your miles per second value";
	cin >> MPH;
	FootPerSecond = MPH * 1.46667;
	
	cout << MPH << " Miles Per Hour = " << FootPerSecond << " Foot Per Second";
	
	return 0;
	
}

/* Sample Output (test cases)

Input: 2
Output:
2 Miles Per Hour = 2.93334 Foot Per Second



Input: 17
Output:
17 Miles Per Hour = 24.9334 Foot Per Second



Input: 9.8
Output:
9.8 Miles Per Hour = 14.3734 Foot Per Second

*/


