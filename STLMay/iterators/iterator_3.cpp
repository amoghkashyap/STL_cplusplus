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
vector<string>::const_iterator citer = mos.begin();
vector<string>::const_iterator cendIter = mos.end();

while(citer != cendIter){
	//*citer = "prefix "+ *citer;  cannot modify contents of iterator because of const_iterator
	cout<< *citer << " ";

	++citer;
}

return 0;
}
#endif
