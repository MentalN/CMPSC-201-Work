// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-25-16
// HW #6.2
// Letter grades programs using arrays and functions
#include <iostream>
using namespace std;

double average (double x[], int n); 		//Prototype functions.
double maximum (double x[], int n);
int aboveAverage (double x[], int n);



int main()
{
	double grades [50];
	int ngrades;
	cout << "Enter number of grades (max = 50) > ";
	cin >> ngrades;
	
	for (int k = 0; k < ngrades; k++)
	{
		cout << "Enter a grade > ";
		cin >> grades [k];
	}
	
	double avg = average (grades , ngrades);
	double max = maximum (grades , ngrades);
	int aboveAvg = aboveAverage (grades , ngrades);

	cout << endl; 		//Just to make the output a bit more organized.
	
	cout << "Average grade = " 			  << avg << endl;
	cout << "Highest grade = " 			  << max << endl;
	cout << "Grades above the average = " << aboveAvg;
	
	
}


double average (double x[], int n)
{
	double sum = 0;
	for (int k = 0; k < n; k++)
		
		sum = sum + x[k];
		return sum / n;
		
}



double maximum (double x[], int n)
{
	double maxG;
	for (int k = 0; k < n; k++)
	{
		if (k == 0) maxG = x[k];
		if (x[k] > maxG) maxG = x[k];
	}
	return maxG;
}



int aboveAverage (double x[], int n)
{
	double avrg = average (x , n);		//Calling the average function.
	int count = 0;
	
	for (int k = 0; k < n; k++)
	{
		if (x[k] > avrg) count++;
	}
	
	return count;
}


/* Test cases


Enter number of grades (max = 50) > 9
Enter a grade > 88
Enter a grade > 55
Enter a grade > 92
Enter a grade > 48
Enter a grade > 87
Enter a grade > 82
Enter a grade > 22
Enter a grade > 99
Enter a grade > 97

Average grade = 74.4444
Highest grade = 99
Grades above the average = 6
--------------------------------
Process exited after 48.93 seconds with return value 0
Press any key to continue . . .



Enter number of grades (max = 50) > 7
Enter a grade > 85.52
Enter a grade > 92.25
Enter a grade > 68.22
Enter a grade > 72.89
Enter a grade > 97.88
Enter a grade > 97.75
Enter a grade > 82.80

Average grade = 85.33
Highest grade = 97.88
Grades above the average = 4
--------------------------------
Process exited after 67.79 seconds with return value 0
Press any key to continue . . .



Enter number of grades (max = 50) > 12
Enter a grade > 55
Enter a grade > 44
Enter a grade > 80.5
Enter a grade > 82.255
Enter a grade > 75
Enter a grade > 100
Enter a grade > 99.99
Enter a grade > 14.20
Enter a grade > 0
Enter a grade > 89.99
Enter a grade > 77
Enter a grade > 98.5

Average grade = 68.0363
Highest grade = 100
Grades above the average = 8
--------------------------------
Process exited after 77.85 seconds with return value 0
Press any key to continue . . .


*/
