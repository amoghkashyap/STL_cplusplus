//============================================================================
// Name        : STLMay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<numeric>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN



int main() {


	vector<string> firstBatch = {"Embrace","Free","Dream","Start","Trust"};
	vector<string> secondBatch = {"Elegance","Yourself","Big","Living","Yourself"};
	vector<string> combined;

	transform(firstBatch.begin(),firstBatch.end(),secondBatch.begin(),back_inserter(combined),plus<string>());

	copy(combined.begin(),combined.end(),ostream_iterator<string>(cout," "));



	return 0;
}

#endif
