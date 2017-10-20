// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-24-16
// HW #5.2
// Temperature Conversion with Functions
#include <iostream>
using namespace std;

double F2C (double F);  //prototype functions
double C2F (double C);
void instructions (void);


int main ()
{
	double degF, degC, celsius, fahrenheit;
	
	while (1) 
	{
		int code;
	
		cout << "Enter the code number for the desired conversion operation > ";  
		cin >> code;
		
	if (code == 1)
	{
		cout << "Enter temperture value in fahrenheit > ";
		cin >> degF;
		celsius = F2C (degF);
		cout << celsius << " Degrees Celsius." << endl;
	}
	
	else if (code == 2)
	{
		cout << "Enter temperture value in celsius > ";
		cin >> degC;
		fahrenheit = C2F (degC);
		cout << fahrenheit << " Degrees Fahrenheit." << endl;
	}
	
	else if (code == 3)
	{
		instructions ();
	}
	
	else if (code == 4)
	{
		return 0;
	}
	
	else 
	{
		cout << "Invalid entry, please enter 3 to display instructions." << endl; 		// For entries with no functions.
	}
	
	}
	
}


double F2C (double F)
{
	double C;
	C = (F - 32) * 5/9;				// Fahrenheit to Celsius conversion function.
	return C;
}

double C2F (double C)
{
	double F;
	F = (1.8 * C) + 32;				// Celsius to Fahrenheit conversion function.
	return F;
}

void instructions (void)
{
	cout << "Instuctions codes:" 		 << endl;
	cout << "1 - Fahrenheit to Celsius." << endl;
	cout << "2 - Celsius to Fahrenheit." << endl;
	cout << "3 - Display instructions. " << endl;		// Display instructions function.
	cout << "4 - Quit."					 << endl;
	
}



/* Sample outputs

Enter the code number for the desired conversion operation > 1
Enter temperture value in fahrenheit > 70
21.1111 Degrees Celsius.
Enter the code number for the desired conversion operation >



Enter the code number for the desired conversion operation > 2
Enter temperture value in celsius > 21.8
71.24 Degrees Fahrenheit.
Enter the code number for the desired conversion operation >



Enter the code number for the desired conversion operation > 3
Instuctions codes:
1 - Fahrenheit to Celsius.
2 - Celsius to Fahrenheit.
3 - Display instructions.
4 - Quit.
Enter the code number for the desired conversion operation >



Enter the code number for the desired conversion operation > 0
Invalid entry, please enter 3 to display instructions.
Enter the code number for the desired conversion operation >



Enter the code number for the desired conversion operation > 4

--------------------------------
Process exited after 0.8401 seconds with return value 0
Press any key to continue . . .



*/
