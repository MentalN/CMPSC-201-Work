// Nawaf Abdullah
// CMPSC 201 SU 2016
// Date 7-31-16
// HW #8A
// Computing various statistics of a text file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
			
			
			
			noVowels = containsVowels(word);
			
			
			letterSum = letterSum + word.length(); // average length of word
			lenAvg = letterSum / numWords;
			
			
			if (word.size() < shortest.size())	//Length of shortest word
				shortest = word;
			else if (word.size() > longest.size())	//Length of longest word
				longest = word;
			
			for ( int k = 0; k < word.length(); k++) //words with vowels
			{	
			if (word [k] == 'a' || word [k] == 'e' || word [k] == 'i' || word [k] == 'o' || word [k] == 'u')
			vowels++;
			}
			
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

bool containsVowels(const string& word)
{
    return word.find_first_of("aeiouyAEIOUY") != std::string::npos;
}
