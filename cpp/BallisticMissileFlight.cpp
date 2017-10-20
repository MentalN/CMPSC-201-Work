// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #4.3
// Table of the trajectory vs. time of a ballistic missile

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double vi, deg, dt, maxY;
	double x, y, t = 0;
	
	cout << "Enter intial velocity in feet per second ";
	cin >> vi;
	cout << "Enter launch angle in degree ";
	cin >> deg;
	cout << "Enter time increment ";
	cin >> dt;
	cout << "   " << endl; // Just a space between the input prompt and the output
	
	cout << "Time (s)		X-position (feet)		 Y-position (feet)" << endl;
	cout << "-------			-----------------		 -----------------" << endl;
	
	for (int t = 0; y >= 0 ; t = t + dt)
	{
		t = t;
		x = vi*cos(deg * 0.0174533) * t;
		y = vi*sin(deg * 0.0174533) * t - 0.5 * 32.2 * pow(t, 2);
		
		cout << t << "			" << x << "				 " << y << endl;
		
		if (t == 0) maxY = y;
		if (y > maxY) maxY = y;
	}
	cout << "Max height = " << maxY;
	
	return 0;	
}


/* Sample Output (test cases) 


Enter intial velocity in feet per second 450
Enter launch angle in degree 45
Enter time increment 4

Time (s)                X-position (feet)                Y-position (feet)
-------                 -----------------                -----------------
0                       0                                0
4                       1272.79                          1015.19
8                       2545.58                          1515.19
12                      3818.38                          1499.98
16                      5091.17                          969.571
20                      6363.96                          -76.0368
Max height = 1515.19
--------------------------------
Process exited after 11.55 seconds with return value 0
Press any key to continue . . .



Enter intial velocity in feet per second 1000
Enter launch angle in degree 66
Enter time increment 5

Time (s)                X-position (feet)                Y-position (feet)
-------                 -----------------                -----------------
0                       0                                0
5                       2033.68                          4165.23
10                      4067.36                          7525.46
15                      6101.04                          10080.7
20                      8134.72                          11830.9
25                      10168.4                          12776.1
30                      12202.1                          12916.4
35                      14235.8                          12251.6
40                      16269.4                          10781.8
45                      18303.1                          8507.05
50                      20336.8                          5427.28
55                      22370.5                          1542.51
60                      24404.2                          -3147.26
Max height = 12916.4
--------------------------------
Process exited after 14 seconds with return value 0
Press any key to continue . . .




Enter intial velocity in feet per second 334
Enter launch angle in degree 33
Enter time increment 2

Time (s)                X-position (feet)                Y-position (feet)
-------                 -----------------                -----------------
0                       0                                0
2                       560.232                          299.419
4                       1120.46                          470.038
6                       1680.7                           511.857
8                       2240.93                          424.876
10                      2801.16                          209.095
12                      3361.39                          -135.486
Max height = 511.857
--------------------------------
Process exited after 18.48 seconds with return value 0
Press any key to continue . . .

*/
