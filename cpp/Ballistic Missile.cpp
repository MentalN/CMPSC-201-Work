// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-04-16
// HW #2B
// Title: Ballistic Missile
// A program that calculates the x and y position given an intial velocity in (ft/s), a firing angle (in degrees), and time (in seconds).


#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double angle, v, x, y, t;
	const double g = 9.81;
	
	cout << "Enter intial velocity of the missile in feet per second.";
	cin >> v;
	
	cout << "Enter firing angle of the missile in degrees.";
	cin >> angle;
	
	cout << "Enter time in seconds.";
	cin >> t;
	
	
	x = v*cos(angle * 0.0174533) * t;
	
	y = v*sin(angle * 0.0174533) * t - 0.5 * g * pow(t, 2);
	
	// "0.0174533" is the coversion factor for "Degrees to Radian" //
	
	cout << "Position in the x-direction = " << x << " ft" << endl;
	cout << "Position in the y-direction = " << y << " ft";
	
	return 0;
	
}

/* Sample Output (test cases)

Input:
	Intial Velocity: 50
	Launch Angle: 30
	Time: 5
Output:
	Position in the x-direction = 216.506 ft
	Position in the y-direction = 2.37505 ft



Input:
	Intial Velocity: 420
	Launch Angle: 45
	Time: 10
Output:
	Position in the x-direction = 2969.85 ft
	Position in the y-direction = 2479.35 ft



Input:
	Intial Velocity: 750.53
	Launch Angle:66.77
	Time:15.3
Output:
	Position in the x-direction = 4529.2 ft
	Position in the y-direction = 9403.95 ft



*/


