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
#include<set>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

class WordFinder {
public:
	vector<string>::iterator m_begin;
	vector<string>::iterator m_end;

	WordFinder(vector<string>::iterator beg, vector<string>::iterator end) :
			m_begin(beg), m_end(end) {

	}

	bool operator()(const string& strWord) {
		bool val = binary_search(m_begin, m_end, strWord);
		return !val;
	}

};

int main() {
	vector<string> dictionary;
	ifstream dictFile("dictionary.txt");
	ifstream wordsFile("myword.txt");

	copy(istream_iterator<string>(dictFile), istream_iterator<string>(),
			back_inserter(dictionary));

	copy_if(istream_iterator<string>(wordsFile), istream_iterator<string>(),
			ostream_iterator<string>(cout, "\n"),
			WordFinder(dictionary.begin(), dictionary.end()));

	return 0;
}

#endif
