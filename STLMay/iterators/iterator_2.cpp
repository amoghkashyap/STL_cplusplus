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


int main() {

vector<string> mos;
char buffer[20];

for(int i=0;i<10;++i){
	sprintf(buffer,"DN=%d",i);
	mos.push_back(string(buffer));
}
cout<<endl;
vector<string>::iterator iter = mos.begin();
vector<string>::iterator endIter = mos.end();

while(iter != endIter){
	*iter = "prefix "+ *iter;
	cout<< *iter << " ";

	++iter;
}

return 0;
}
#endif
