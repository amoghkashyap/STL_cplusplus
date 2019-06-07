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
#include<functional>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN



int main() {


	vector<string> firstBatch = {"Embrace","Free","Dream","Start","Trust"};
	vector<string> secondBatch = {"Elegance","Yourself","Big","Living","Yourself"};
	vector<string> postFixString = {"POSTFIX","POSTFIX","POSTFIX","POSTFIX","POSTFIX"};
	vector<string> combined;
	auto fn = bind1st(plus<string>(),"PRE-FIX");
	transform(firstBatch.begin(),firstBatch.end(),secondBatch.begin(),back_inserter(combined),fn);

	copy(combined.begin(),combined.end(),ostream_iterator<string>(cout,"\n"));



	return 0;
}

#endif
