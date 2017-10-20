// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 8-1-16
// HW #8A
// Computing various statistics of a text file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool containsNoVowels(const string& word);
bool containsVowels(const string& word);


int main()
{
	int numWords = 0;
	int startT = 0;
	int startSH = 0;
	int noVowels = 0;
	int letterSum = 0;
	int vowels = 0;
	double lenAvg;
	string shortest, longest, word;
	int foundNoV;
	int foundV;
	
	ifstream wordfile;
	wordfile.open("words.txt");
	
	if (wordfile.fail())
		{ cout << "Error opening file"; return 0;}
		
	while (!wordfile.eof())
		{
			wordfile >> word;  //Number of words
			numWords++;	
			
			if ( word [0] == 't' ) //Number of words starting with t
			startT++;
			
			
			foundNoV = containsNoVowels(word);
			if (foundNoV == 0)
			noVowels++;
			
			letterSum = letterSum + word.length(); // average length of word
			lenAvg = letterSum / numWords;
			
			
			if(numWords == 1)			// Initialize values at the first word
			{ 
				shortest = word;
				longest = word;
			}
			if (word.size() < shortest.size())	//Length of shortest word
				shortest = word;
			else if (word.size() > longest.size())	//Length of longest word
				longest = word;
			
			foundV = containsVowels(word);
			if (foundNoV == 1)
			vowels++;
			
			if ( word [0] == 's' && word [1] == 'h')  //Number of words starting with Sh
			startSH++;
			
			
		}
		
	wordfile.close();
	
	
	
	cout << "Number of words in the file = " << numWords << endl;
	cout << "Number of words in the file starting with t = " << startT << endl;
	cout << "Number of words in the file without vowels = " << noVowels << endl;
	cout << "Average word length = " << lenAvg << " Letters" << endl;
	cout << "Shortest word length = " << shortest.size() << " Letters" << endl;
	cout << "Longest word length = " << longest.size() << " Letters" << endl;
	cout << "Number of words in file with vowels = " << vowels << endl;
	cout << "Number of words in the file starting with Sh = " << startSH;
	return 0;
	
}


bool containsNoVowels(const string& word)
{
    return word.find_first_of("aeiouyAEIOUY") != std::string::npos; 
}

bool containsVowels(const string& word)
{
    return word.find_first_of("aeiouAEIOU") != std::string::npos; 
}



/* Test output


Number of words in the file = 109582
Number of words in the file starting with t = 5530
Number of words in the file without vowels = 118
Average word length = 8 Letters
Shortest word length = 1 Letters
Longest word length = 28 Letters
Number of words in file with vowels = 109464
Number of words in the file starting with Sh = 1058
--------------------------------
Process exited after 0.1087 seconds with return value 0
Press any key to continue . . .


*/
