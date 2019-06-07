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

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int g_CONSTRUCTORS = 0;
int g_COPY_CONSTRUCTORS =0;
int g_COUNT = 10;


int main() {

set<int> setOfInts = { 2,85,46,1};
multiset<int> setOfMultiInts = {1,1,2, 2,85,46,1};
set<int, greater<int> > setOfGreater = { 1 ,2 ,2, 3, 4,9,6};
copy(setOfInts.begin(),setOfInts.end(),ostream_iterator<int>(cout," "));
cout<<endl;
copy(setOfGreater.begin(),setOfGreater.end(),ostream_iterator<int>(cout," "));
cout<<endl;
copy(setOfMultiInts.begin(),setOfMultiInts.end(),ostream_iterator<int>(cout," "));



return 0;
}
#endif
