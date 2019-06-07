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
#include<list>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int g_COUNT = 10;


int main() {

list<string> mos;
char buffer[20];

for(int i=0;i<10;++i){
	sprintf(buffer,"DN=%d",i);
	mos.push_back(string(buffer));
}
cout<<endl;
list<string>::iterator iter = mos.begin();
list<string>::iterator endIter = mos.end();

while(iter != endIter){
	cout<<*iter<<endl;
	mos.erase(iter++);// mos.erase(++iter) will crash
}

list<string>::iterator newIter = mos.begin();
list<string>::iterator newEndIter = mos.end();

while(newIter != newEndIter){
	cout<<*newIter<< endl;
}

return 0;
}
#endif
