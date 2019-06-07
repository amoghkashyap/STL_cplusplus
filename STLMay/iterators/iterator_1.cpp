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

int g_COUNT = 10;

int convertCharToInt(char c) {
	return c - 48;
}

char convertIntToChar(int i) {
	return i + 48;
}

class push_back_iterator {
protected:
	vector<int>* m_container;
public:
	push_back_iterator(vector<int>& cont) {
		m_container = &cont;
	}

	void operator=(int i) {
		m_container->push_back(i);
	}
	push_back_iterator& operator*() {
		return *this;
	}

	push_back_iterator& operator++() {
		return *this;
	}
};

template<class InputIterator, class OutputIterator, class unaryOperation>
void my_transform(InputIterator iter, InputIterator endIter,
		OutputIterator destinationIterator, unaryOperation unary_op) {
	while (iter != endIter) {
		*destinationIterator = unary_op(*iter);
		++iter;
		++destinationIterator;
	}
}

int main() {
	vector<string> mos;
	vector<char> chrs = { '1', '2', '3' };
	vector<int> ints = {1,2,3,4,5};
//ints.resize(chrs.size()); not required
fstream aache("output.txt");
//transform(chrs.begin(), chrs.end(), back_inserter(ints), convertCharToInt);

	transform(chrs.begin(), chrs.end(), ostream_iterator<int>(aache, "\n"),
			convertCharToInt);

	transform(ints.begin(),ints.end(),ostream_iterator<char>(aache,"\n"),convertIntToChar);
	//copy(ints.begin(), ints.end(), ostream_iterator<int>(cout, " "));

	vector<char> newVector;
	newVector.reserve(chrs.size());
	copy(chrs.begin(),chrs.end(),back_inserter(newVector));
	copy(newVector.begin(), newVector.end(), ostream_iterator<char>(cout, " "));

	return 0;
}
#endif
