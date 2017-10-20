// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-11-16
// HW #4.1
// Table of Fehrenheit to Centigrade values using WHILE loop

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
	
	int Fehrenheit = intialF;
	while ( Fehrenheit <= finalF )
	{
		Centigrade = (5.0/9.0) * (Fehrenheit - 32);
		cout << Fehrenheit << "				" << Centigrade << endl;
		Fehrenheit = Fehrenheit + incrF;
	}
	
	return 0;	
}


/* Sample Output (test cases) 

Enter intial Fehrenheit temperture 0
Enter Fehrenheit temperture increment 10
Enter final Fehrenheit temperture 100
Fehrenheit                      Centigrade
----------                      ----------
0                               -17.7778
10                              -12.2222
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
Process exited after 8.372 seconds with return value 0
Press any key to continue . . .





Enter intial Fehrenheit temperture -70
Enter Fehrenheit temperture increment 15
Enter final Fehrenheit temperture 70
Fehrenheit                      Centigrade
----------                      ----------
-70                             -56.6667
-55                             -48.3333
-40                             -40
-25                             -31.6667
-10                             -23.3333
5                               -15
20                              -6.66667
35                              1.66667
50                              10
65                              18.3333

--------------------------------
Process exited after 4.423 seconds with return value 0
Press any key to continue . . .





Enter intial Fehrenheit temperture -64
Enter Fehrenheit temperture increment 8
Enter final Fehrenheit temperture 0
Fehrenheit                      Centigrade
----------                      ----------
-64                             -53.3333
-56                             -48.8889
-48                             -44.4444
-40                             -40
-32                             -35.5556
-24                             -31.1111
-16                             -26.6667
-8                              -22.2222
0                               -17.7778

--------------------------------
Process exited after 12.58 seconds with return value 0
Press any key to continue . . .



*/
