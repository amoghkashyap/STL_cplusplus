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

short convertToInt(const char c) {
	return c - 48;
}

int main() {

	string num =
			"123847012389571107340815783681034150786345810384756134786818374517835183468";

	vector<short> numVec;
	transform(num.begin(), num.end(), back_inserter(numVec), convertToInt);

	int sum = accumulate(numVec.begin(), numVec.end(), 0);

	cout << "The sum is " << sum << endl;

	if (sum % 9 == 0)
		cout << "The number is divisible by 9" << endl;
	cout << "The number is not divisible by 9" << endl;

	return 0;
}

#endif
