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

unordered_map<int,string> employees;

employees[12345] = "eddelu manjunatha";
employees[23467] = "okay";
employees[78901] = "Huccha venkat";

//.insert(pair<int,string>(123,"haage summane"));
cout<<"employee name for employee ID 78901 :"<<employees[78901]<<endl;

for(auto iter = employees.begin(); iter!= employees.end();++iter){
	pair<int,string> obj = *iter;
	cout<<obj.first<< " : "<<obj.second<<endl;
//or
	cout<< iter->first<<" : "<<iter->second<<endl;
}


return 0;
}
#endif
