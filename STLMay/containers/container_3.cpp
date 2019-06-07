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

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int g_CONSTRUCTORS = 0;
int g_COPY_CONSTRUCTORS =0;
int g_COUNT = 10;
class ManagedObject{
public:
	string m_id;
	ManagedObject(const string& id){
		m_id = id;
		++g_CONSTRUCTORS;
	}
	ManagedObject(const ManagedObject& rhs){
			m_id = rhs.m_id;
			++g_COPY_CONSTRUCTORS;
		}
};

int main() {
	vector<ManagedObject> objects;
	//objects.reserve(12);
	char buffer[50];

	for(int i=0;i< g_COUNT;++i){
		sprintf(buffer,"DN=%d",i);
		ManagedObject temp(buffer);
		objects.push_back(temp);
		cout<<"size is "<<objects.size()<<" and the capacity "<<objects.capacity()<<endl;
	}
	cout<< "Printing the objects"<< endl;

	try{
	for(auto iter = objects.begin(); iter!= objects.end();++iter){
		cout<<(*iter).m_id<< endl;
	}
	}

	catch(exception& ex){
		cout<<" caught exception<<"<<ex.what()<<endl;
	}

	cout<< " constructors created are "<<g_CONSTRUCTORS<<endl;
	cout<< " constructors created are "<<g_COPY_CONSTRUCTORS<<endl;
	return 0;
}
#endif
