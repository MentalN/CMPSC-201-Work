// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #4.4
// Calculating the value of Pi given the a number of terms.

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int nterms, k;
	double sum, frac;
	
	cout << "Please enter the number of terms to approximate the value of PI ";
	cin >> nterms;
	
	
	for (k = 0; k <= nterms; k++)
	{
		frac = 4 * pow(-1, k)/(1 + (2 * k));
		sum = sum + frac;
		
		
		
	}
	
	cout << "PI = " << sum;
	
	return 0;	
}


/* Sample Output (test cases) 


Please enter the number of terms to approximate the value of PI 1000
PI = 3.14259
--------------------------------
Process exited after 1.957 seconds with return value 0
Press any key to continue . . .




Please enter the number of terms to approximate the value of PI 50000
PI = 3.14161
--------------------------------
Process exited after 2.715 seconds with return value 0
Press any key to continue . . .



Please enter the number of terms to approximate the value of PI 100000
PI = 3.1416
--------------------------------
Process exited after 5.011 seconds with return value 0
Press any key to continue . . .



Please enter the number of terms to approximate the value of PI 1000000
PI = 3.14159
--------------------------------
Process exited after 3.353 seconds with return value 0
Press any key to continue . . .




Please enter the number of terms to approximate the value of PI 10000000
PI = 3.14159
--------------------------------
Process exited after 11.25 seconds with return value 0
Press any key to continue . . .

*/
