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



class GreaterThanN{
private:
	int m_N;
public:
	GreaterThanN(int n):m_N(n){}

	bool operator()(const string& str) const{
		if(str.length()> m_N)
			return true;
		return false;
	}
};

int main() {


	vector<string> numbers = {"fasdf","asfdh","fhuuiqwfh","hfadhsjghll"};

	GreaterThanN grThan5(5);
	cout<<" Elements greater than 5 are "<< count_if(numbers.begin(),numbers.end(),grThan5)<<endl;


	GreaterThanN grThan8(8);
	cout<<" Elements greater than 8 are "<< count_if(numbers.begin(),numbers.end(),grThan8)<<endl;

	return 0;
}

#endif
