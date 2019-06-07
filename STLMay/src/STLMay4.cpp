//============================================================================
// Name        : STLMay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<fstream>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN


int main() {
	vector<int> nos;

	fstream myNumbersFile("numbers.txt");
cout << "enter numbers with white space"<< endl;
	copy(istream_iterator< int>(myNumbersFile),istream_iterator<int>(),back_inserter(nos));

	cout<< " total numbers are" << nos.size()<< endl;
	cout<<"the numbers are "<< endl;

	copy(nos.begin(),nos.end(),ostream_iterator<int>(cout," "));
	cout<< endl;
	sort(nos.begin(),nos.end());

	cout<<"after sorting, the numbers are "<< endl;

	copy(nos.begin(),nos.end(),ostream_iterator<int>(cout," "));

	cout<< endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
#endif
