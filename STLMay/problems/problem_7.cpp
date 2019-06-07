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

	vector<int> firstBatch = { 1, 3, 6, 7, 9, 3, 8 };

	cout << count_if(firstBatch.begin(),firstBatch.end(),bind2nd(greater<int>(),5));

	return 0;
}

#endif
