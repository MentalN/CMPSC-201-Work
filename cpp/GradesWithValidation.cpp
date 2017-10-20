// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-25-16
// HW #7A
// Letter grades programs using arrays and functions with input validation.
#include <iostream>
using namespace std;

double average (double x[], int n); 		//Prototype functions.
double maximum (double x[], int n);
double minimum (double x[], int n);
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
		
		while (grades[k] > 100 || grades[k] < 0)  //Got stuck here, Thank you Jeff for pointing out the "||".
		{
			cout << "Invalid Entry, please enter a grade between 0 and 100 > ";
			cin >> grades [k];
		}

	}
	
	double avg = average (grades , ngrades);
	double max = maximum (grades , ngrades);
	double min = minimum (grades , ngrades);
	int aboveAvg = aboveAverage (grades , ngrades);

	cout << endl; 		//Just to make the output a bit more organized.
	
	cout << "Average grade = " 			  << avg << endl;
	cout << "Highest grade = " 			  << max << endl;
	cout << "Lowest grade = "			  << min << endl;
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



double minimum (double x[], int n)
{
	double minG;
	for (int k = 0; k < n; k++)
	{
		if (k == 0) minG = x[k];
		if (x[k] < minG) minG = x[k];
	}
	return minG;
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

Enter number of grades (max = 50) > 7
Enter a grade > 125
Invalid Entry, please enter a grade between 0 and 100 > 25
Enter a grade > -86
Invalid Entry, please enter a grade between 0 and 100 > 86
Enter a grade > 77
Enter a grade > 98
Enter a grade > 94
Enter a grade > 93
Enter a grade > 79

Average grade = 78.8571
Highest grade = 98
Lowest grade = 25
Grades above the average = 5
--------------------------------
Process exited after 67.73 seconds with return value 0
Press any key to continue . . .



Enter number of grades (max = 50) > 8
Enter a grade > 122
Invalid Entry, please enter a grade between 0 and 100 > 53
Enter a grade > -56
Invalid Entry, please enter a grade between 0 and 100 > -57
Invalid Entry, please enter a grade between 0 and 100 > 57
Enter a grade > 77
Enter a grade > 42
Enter a grade > 99
Enter a grade > 88
Enter a grade > 75
Enter a grade > 65

Average grade = 69.5
Highest grade = 99
Lowest grade = 42
Grades above the average = 4
--------------------------------
Process exited after 48.29 seconds with return value 0
Press any key to continue . . .




Enter number of grades (max = 50) > 11
Enter a grade > 77
Enter a grade > 55
Enter a grade > 65
Enter a grade > 95
Enter a grade > 85
Enter a grade > 45
Enter a grade > 0
Enter a grade > 25
Enter a grade > 33
Enter a grade > 76
Enter a grade > 89

Average grade = 58.6364
Highest grade = 95
Lowest grade = 0
Grades above the average = 6
--------------------------------
Process exited after 27.67 seconds with return value 0
Press any key to continue . . .



Enter number of grades (max = 50) > 6
Enter a grade > 75
Enter a grade > 0
Enter a grade > 12
Enter a grade > 65
Enter a grade > 122
Invalid Entry, please enter a grade between 0 and 100 > 22
Enter a grade > 98

Average grade = 45.3333
Highest grade = 98
Lowest grade = 0
Grades above the average = 3
--------------------------------
Process exited after 44.14 seconds with return value 0
Press any key to continue . . .


Enter number of grades (max = 50) > 10
Enter a grade > 78
Enter a grade > 87
Enter a grade > 66
Enter a grade > 68
Enter a grade > 99
Enter a grade > 12
Enter a grade > 56
Enter a grade > 88
Enter a grade > 99
Enter a grade > 100

Average grade = 75.3
Highest grade = 100
Lowest grade = 12
Grades above the average = 6
--------------------------------
Process exited after 24.79 seconds with return value 0
Press any key to continue . . .

*/
