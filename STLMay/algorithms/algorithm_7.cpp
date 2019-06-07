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

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int main() {

	vector<string> firstBatch = { "Name", "test", "what" };
	vector<string> secondBatch = { "Boss", "Calc", "violin", "xmas" };
	vector<string> resultBatch;

	merge(firstBatch.begin(), firstBatch.end(), secondBatch.begin(),
			secondBatch.end(), back_inserter(resultBatch));

	copy(resultBatch.begin(), resultBatch.end(),
			ostream_iterator<string>(cout, " "));

	return 0;

}

#endif
