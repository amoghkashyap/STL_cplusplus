//============================================================================
// Name        : STLMay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<fstream>
#include<list>
#include<set>
#include<map>
#include<unordered_map>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int g_CONSTRUCTORS = 0;
int g_COPY_CONSTRUCTORS =0;
int g_COUNT = 10;


int main() {

unordered_map<string,int> wordCount;
fstream myFile("example.txt");
string word;

while(myFile >> word)
	++wordCount[word];

for(auto iter = wordCount.begin();iter != wordCount.end();++ iter){
	cout << iter->first<< ""
			"\t: "<<iter->second<<endl;
}

cout <<endl;

return 0;
}
#endif
