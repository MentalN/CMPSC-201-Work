// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #3B
// Calculating the total wages for an employee

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double h, total;
	
	cout << "Please enter number of hours ";
	cin >> h;
	
	
	// computing wage
	if (h <= 40) // fewer then 40 hours
		total = h * 10;
	else if (h > 40 && h <= 50) // between 40 - 50 hours
		total = 40 * 10 + (h-40)*15;
	else if (h > 50) // more than 50 hours
		total = 40 * 10 + 10 * 15 + (h - 50)*20;
		
		
	// Display wage total
	cout.setf(ios::fixed);
	cout << "Total wage = " << setprecision (2) <<  total ; 
	return 0;

}



/* Sample output (test cases for every letter grade)

Please enter number of hours 0
Total wage = 0.00
--------------------------------
Process exited after 1.996 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 30
Total wage = 300.00
--------------------------------
Process exited after 4.696 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 49
Total wage = 535.00
--------------------------------
Process exited after 4.596 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 50
Total wage = 550.00
--------------------------------
Process exited after 3.166 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 58
Total wage = 710.00
--------------------------------
Process exited after 8.004 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 65
Total wage = 850.00
--------------------------------
Process exited after 5.926 seconds with return value 0
Press any key to continue . . .



Please enter number of hours 100
Total wage = 1550.00
--------------------------------
Process exited after 3.888 seconds with return value 0
Press any key to continue . . .


*/
