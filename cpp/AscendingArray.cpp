// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-24-16
// HW #6.1
// Verifying that an array is in ascending order.
#include <iostream>
using namespace std;

int ascending (int x[], int npts);		//prototype function

int main ()
{
	int pts [10];
	int npts, feedback;
	cout << "Enter a number of integer (max = 10) >";
	cin >> npts;
	
	for (int k = 0; k < npts; k++)
	{
		cout << "Enter an integer >";
		cin >> pts [k];
	}
	
	feedback = ascending (pts , npts); 
	
	if (feedback == 1)
		cout << "Array values are ascending.";
	else
		cout << "Array values are not ascending.";		
	
	
}


int ascending (int x[], int npts)
{
	int count = 0;
	
	for (int i = 0 ; i < npts-1 ; i++)
	{if ( x[i] < x[i + 1] ) count ++;}
		
		if (count == npts - 1) 
			return 1;
		else
			return 0;

}


/* Test cases:


Enter a number of integer (max = 10) >8
Enter an integer >1
Enter an integer >2
Enter an integer >3
Enter an integer >4
Enter an integer >5
Enter an integer >6
Enter an integer >9
Enter an integer >12
Array values are ascending.
--------------------------------
Process exited after 20.9 seconds with return value 0
Press any key to continue . . .



Enter a number of integer (max = 10) >7
Enter an integer >-5
Enter an integer >0
Enter an integer >3
Enter an integer >4
Enter an integer >15
Enter an integer >20
Enter an integer >99
Array values are ascending.
--------------------------------
Process exited after 32 seconds with return value 0
Press any key to continue . . .



Enter a number of integer (max = 10) >9
Enter an integer >2
Enter an integer >3
Enter an integer >4
Enter an integer >5
Enter an integer >5
Enter an integer >5
Enter an integer >9
Enter an integer >10
Enter an integer >17
Array values are not ascending.
--------------------------------
Process exited after 18.58 seconds with return value 0
Press any key to continue . . .



Enter a number of integer (max = 10) >10
Enter an integer >-10
Enter an integer >-13
Enter an integer >-20
Enter an integer >0
Enter an integer >2
Enter an integer >5
Enter an integer >9
Enter an integer >
11
Enter an integer >99
Enter an integer >101
Array values are not ascending.
--------------------------------
Process exited after 35.4 seconds with return value 0
Press any key to continue . . .



*/

