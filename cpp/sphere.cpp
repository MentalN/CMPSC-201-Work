// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-04-16
// HW #2A
// Program that calculates the volume of a sphere given a radius.


#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double r, v;
	
	// r is for radius, and v is for volume //
	
	cout << "Happy 4th of July!" << endl;
	
	cout << "Please input a value of some radius (r) in meters.";
	cin >> r;
	v = pow(r, 3) * 4 * 3.14159 / 3 ;
	
	// expressing the volume of a sphere as a function of "r" //
	
	cout << "V(r) = " << v << " m^3";
	
	return 0;
	
}

/* Sample Output (test cases)

Input: 2
Output:
V(r) = 33.5103 m^3



Input: 13
Output:
V(r) = 9202.76 m^3



Input: 11.3
Output:
V(r) = 6043.99 m^3

*/


