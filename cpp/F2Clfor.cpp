// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #4.2
// Table of Fehrenheit to Centigrade values using FOR loop

#include <iostream>
using namespace std;

int main ()
{
	double intialF, incrF, finalF;
	double Centigrade;
	
	cout << "Enter intial Fehrenheit temperture ";
	cin >> intialF;
	cout << "Enter Fehrenheit temperture increment ";
	cin >> incrF;
	cout << "Enter final Fehrenheit temperture ";
	cin >> finalF;
	
	cout << "Fehrenheit			Centigrade" << endl;
	cout << "----------			----------" << endl;
	
	for (int Fehrenheit = intialF; Fehrenheit <= finalF; Fehrenheit = Fehrenheit + incrF)
	{
		Centigrade = (5.0/9.0) * (Fehrenheit - 32);
		cout << Fehrenheit << "				" << Centigrade << endl;
	}
	
	return 0;	
}


/* Sample Output (test cases) 

Enter intial Fehrenheit temperture 0
Enter Fehrenheit temperture increment 5
Enter final Fehrenheit temperture 60
Fehrenheit                      Centigrade
----------                      ----------
0                               -17.7778
5                               -15
10                              -12.2222
15                              -9.44444
20                              -6.66667
25                              -3.88889
30                              -1.11111
35                              1.66667
40                              4.44444
45                              7.22222
50                              10
55                              12.7778
60                              15.5556

--------------------------------
Process exited after 4.63 seconds with return value 0
Press any key to continue . . .





Enter intial Fehrenheit temperture -50
Enter Fehrenheit temperture increment 4
Enter final Fehrenheit temperture 0
Fehrenheit                      Centigrade
----------                      ----------
-50                             -45.5556
-46                             -43.3333
-42                             -41.1111
-38                             -38.8889
-34                             -36.6667
-30                             -34.4444
-26                             -32.2222
-22                             -30
-18                             -27.7778
-14                             -25.5556
-10                             -23.3333
-6                              -21.1111
-2                              -18.8889

--------------------------------
Process exited after 14.36 seconds with return value 0
Press any key to continue . . .





Enter intial Fehrenheit temperture 20
Enter Fehrenheit temperture increment 10
Enter final Fehrenheit temperture 100
Fehrenheit                      Centigrade
----------                      ----------
20                              -6.66667
30                              -1.11111
40                              4.44444
50                              10
60                              15.5556
70                              21.1111
80                              26.6667
90                              32.2222
100                             37.7778

--------------------------------
Process exited after 5.242 seconds with return value 0
Press any key to continue . . .

*/
