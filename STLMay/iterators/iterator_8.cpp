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

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int g_COUNT = 10;


string getPrefixFunction(string val){
	return string("prefix")+val;
}

int convertCharToInt(char c){
	return c-48 ;
}


template<class InputIterator,class OutputIterator ,class unaryOperation>
void my_transform(InputIterator iter,
		InputIterator endIter,OutputIterator destinationIterator, unaryOperation unary_op) {
	while (iter != endIter) {
		*destinationIterator = unary_op(*iter);
//		destVector.push_back(unary_op(*iter)); will work when memory is not allocated and vector is directly passed.
		++iter;
		++destinationIterator;
	}
}

int main() {

vector<string> mos;
vector<char> chrs = {'1','2','3'};
vector<int> ints;
ints.resize(chrs.size());

my_transform(chrs.begin(),chrs.end(),ints.begin(),convertCharToInt);


cout<<ints[2]<<endl;

vector<int>::iterator intIter = ints.begin();
while(intIter != ints.end()){
	cout<<*intIter<<endl;
	++intIter;
}









/*
char buffer[20];


for(int i=0;i<10;++i){
	sprintf(buffer,"DN=%d",i);
	mos.push_back(string(buffer));
}
cout<<endl;
vector<string>::iterator iter = mos.begin();
vector<string>::iterator endIter = mos.end();
cout<<"The source vector"<<endl;

while(iter != endIter){
	cout<<*iter<< endl;
	++iter;
}

vector<string> modifiedMos;
modifiedMos.resize(mos.size());

my_transform(iter, endIter,modifiedMos.begin(),getPrefixFunction);

vector<string>::iterator newIter = mos.begin();
vector<string>::iterator newEndIter = mos.end();
cout<<"The destination vector"<<endl;

while(newIter != newEndIter){
	cout<<*newIter<< endl;
	++newIter;
}
*/

return 0;
}
#endif
