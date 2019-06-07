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

	string num = "432617986519385839745770110871435761348706134506811345691345876";
	vector<short> vectNum;

	transform(num.begin(),num.end(),back_inserter(vectNum),bind2nd(minus<short>(),48));

	copy(vectNum.begin(),vectNum.end(),ostream_iterator<short>(cout," "));

	return 0;
}

#endif
