//============================================================================
// Name        : STLMay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include <iostream>
#include<algorithm>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN
int g_COUNT = 100;

int main() {
	vector<int> nos;
	int temp = 0;
	int count = 0;

	while(cin>>temp)
		nos.push_back(temp);
	cout<< " total numbers are" << count<< endl;
	cout<<"the numbers are "<< endl;
	count = nos.size();
	for(int i =0;i<count;i++){
		cout<< nos[i]<< " ";
	}
	cout<< endl;
	sort(nos.begin(),nos.end());

	cout<<"after sorting, the numbers are "<< endl;


	for(int i =0;i<count;i++){
		cout<< nos[i]<< " ";
	}
	cout<< endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
#endif
