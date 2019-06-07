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

/*short plusInt(short i,short j){
	return i+j;
}*/

int main() {

	string firstNum ="123847012389571107340815783681034150786345810384756134786818374517835183468";
	string secondNum ="123847012389571107340815783681034150786345810384756134786818374517835183468";


	vector<short> firstNumVec;
	vector<short> secNumVec;
	vector<short> resNumVec;


	transform(firstNum.begin(), firstNum.end(), back_inserter(firstNumVec), convertToInt);
	transform(secondNum.begin(), secondNum.end(), back_inserter(secNumVec), convertToInt);

	//transform(firstNumVec.begin(),firstNumVec.end(),secNumVec.begin(),back_inserter(resNumVec),plusInt); instead of this use below
	transform(firstNumVec.begin(),firstNumVec.end(),secNumVec.begin(),back_inserter(resNumVec),plus<int>());

	copy(resNumVec.begin(),resNumVec.end(),ostream_iterator<short>(cout," "));

	return 0;
}

#endif
