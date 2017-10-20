// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-25-16
// HW #7B
// Letter grades programs using arrays [sorted] and functions with input validation.
#include <iostream>
using namespace std;

double average(double x[], int n); 		//Prototype functions.
double maximum(double x[], int n);
double minimum(double x[], int n);
int aboveAverage(double x[], int n);
void sort(double x[], int n);



int main()
{
	double grades[50];
	int ngrades;
	cout << "Enter number of grades (max = 50) > ";
	cin >> ngrades;



	for (int k = 0; k < ngrades; k++)
	{
		cout << "Enter a grade > ";
		cin >> grades[k];

		while (grades[k] > 100 || grades[k] < 0)  //Got stuck here, Thank you Jeff for pointing out the "||".
		{
			cout << "Invalid Entry, please enter a grade between 0 and 100 > ";
			cin >> grades[k];
		}

	}

	cout << endl; 		//Just to make the output a bit more organized.

	sort(grades, ngrades);

	cout << "Grades sorted in ascending order:" << endl;

	for (int i = 0; i <= ngrades - 1; i++)
	{
		cout << grades[i] << "  ";
	}

	cout << endl;   //Diplaying grades in ascending order.


	double avg = average(grades, ngrades);
	double max = maximum(grades, ngrades);
	double min = minimum(grades, ngrades);
	int aboveAvg = aboveAverage(grades, ngrades);

	cout << endl; 		//Just to make the output a bit more organized.

	cout << "Average grade = " << avg << endl;
	cout << "Highest grade = " << max << endl;
	cout << "Lowest grade = " << min << endl;
	cout << "Grades above the average = " << aboveAvg;





}


double average(double x[], int n)
{
	double sum = 0;
	for (int k = 0; k < n; k++)

		sum = sum + x[k];
	return sum / n;

}



double maximum(double x[], int n)
{
	double maxG;
	for (int k = 0; k < n; k++)
	{
		if (k == 0) maxG = x[k];
		if (x[k] > maxG) maxG = x[k];
	}
	return maxG;
}



double minimum(double x[], int n)
{
	double minG;
	for (int k = 0; k < n; k++)
	{
		if (k == 0) minG = x[k];
		if (x[k] < minG) minG = x[k];
	}
	return minG;
}



int aboveAverage(double x[], int n)
{
	double avrg = average(x, n);		//Calling the average function.
	int count = 0;

	for (int k = 0; k < n; k++)
	{
		if (x[k] > avrg) count++;
	}

	return count;
}

void sort(double x[], int n)
{
	double min_value;
	int min_index;
	double temp;
	for (int i = 0; i < n - 1; i++)
	{
		// initialize minimum value and index
		min_value = x[i];
		min_index = i;
		for (int j = i + 1; j< n; j++)
		{
			if (x[j] < min_value) // find min value in array
			{
				min_value = x[j];
				min_index = j;
			}
		}
		// swap minimum value with ith value
		temp = x[min_index];
		x[min_index] = x[i];
		x[i] = temp;
	}
	return; // no value is returned, since changes to the array (sorting) are permanent (call by ref.)
}


/*test cases

Enter number of grades (max = 50) > 6
Enter a grade > 12
Enter a grade > 53
Enter a grade > 78
Enter a grade > 98
Enter a grade > 45
Enter a grade > 33

Grades sorted in ascending order:
12  33  45  53  78  98

Average grade = 53.1667
Highest grade = 98
Lowest grade = 12
Grades above the average = 2
Exit code: 0 (normal program termination)


Enter number of grades (max = 50) > 7
Enter a grade > 23
Enter a grade > 12
Enter a grade > 55
Enter a grade > 69
Enter a grade > 89
Enter a grade > 92
Enter a grade > 93

Grades sorted in ascending order:
12  23  55  69  89  92  93

Average grade = 61.8571
Highest grade = 93
Lowest grade = 12
Grades above the average = 4
Exit code: 0 (normal program termination)


Enter number of grades (max = 50) > 10
Enter a grade > 12
Enter a grade > 55
Enter a grade > 66
Enter a grade > 45
Enter a grade > 89
Enter a grade > 99
Enter a grade > 100
Enter a grade > 92
Enter a grade > 87
Enter a grade > 122
Invalid Entry, please enter a grade between 0 and 100 > 22

Grades sorted in ascending order:
12  22  45  55  66  87  89  92  99  100

Average grade = 66.7
Highest grade = 100
Lowest grade = 12
Grades above the average = 5
Exit code: 0 (normal program termination)




*/