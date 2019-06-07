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
	vector<int> ints;
//ints.resize(chrs.size()); not required

	//push_back_iterator objVectorWithOverload(ints);
	transform(chrs.begin(), chrs.end(), back_inserter(ints),convertCharToInt);
//	transform(chrs.begin(), chrs.end(), front_inserter(ints),convertCharToInt); to get output in reverse order


	vector<int>::iterator intIter = ints.begin();
	while (intIter != ints.end()) {
		cout << *intIter << endl;
		++intIter;
	}

	return 0;
}
#endif
