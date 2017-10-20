// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-12-16
// HW #5.1
// Probability of tossing 5 heads (of a coin) in a row.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int toss1, toss2, toss3, toss4, toss5, ntrials, nFiveheads = 0;
	
	cout << "Please enter the number of trials ";
	cin >> ntrials;
	
	
	for (int a = 0; a < ntrials; a++)
	{
		toss1 = rand() % 2;
		if (toss1 == 1) continue;
		toss2 = rand() % 2;
		if (toss2 == 1) continue;
		toss3 = rand() % 2;
		if (toss3 == 1) continue;
		toss4 = rand() % 2;
		if (toss4 == 1) continue;
		toss5 = rand() % 2;
		if (toss5 == 1) nFiveheads++;
		
	}

	cout << "Number of 5 heads in a row = " << nFiveheads << endl;
	cout << "Percentage of 5 heads in a row = " << 100*(double)nFiveheads/ntrials << " %" << endl;
	cout << "Percentage difference from theoretical result = " << 100 * ((0.03125 - (double)nFiveheads/ntrials)/ 0.03125) << " %"; // % error = theorertical - experimental/theoretical * 100 
																														  		   // The theoretical value being 1/32 = 0.03125

	
	
	return 0;	
}


/* Sample Output (test cases) 



Please enter the number of trials 10000
Number of 5 heads in a row = 311
Percentage of 5 heads in a row = 3.11 %
Percentage difference from theoretical result = 0.48 %
--------------------------------
Process exited after 3.23 seconds with return value 0
Press any key to continue . . .



Please enter the number of trials 100000
Number of 5 heads in a row = 3098
Percentage of 5 heads in a row = 3.098 %
Percentage difference from theoretical result = 0.864 %
--------------------------------
Process exited after 4.797 seconds with return value 0
Press any key to continue . . .




Please enter the number of trials 1000000
Number of 5 heads in a row = 30892
Percentage of 5 heads in a row = 3.0892 %
Percentage difference from theoretical result = 1.1456 %
--------------------------------
Process exited after 3.207 seconds with return value 0
Press any key to continue . . .




Please enter the number of trials 10000000
Number of 5 heads in a row = 309048
Percentage of 5 heads in a row = 3.09048 %
Percentage difference from theoretical result = 1.10464 %
--------------------------------
Process exited after 8.597 seconds with return value 0
Press any key to continue . . .



*/
