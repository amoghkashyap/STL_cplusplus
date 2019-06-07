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

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

class ManagedObject {
public:
	string m_clusterId;
	string m_id;
	int m_time;

	bool operator<(const ManagedObject& rhs) const { // < not valid for managedObject(available for int, string)
		return m_clusterId < rhs.m_clusterId;
	}

	friend istream& operator>>(istream& input, ManagedObject& rhs) {
		input >> rhs.m_clusterId >> rhs.m_id >> rhs.m_time;
		return input;
	}
	friend ostream& operator<<(ostream& output, const ManagedObject& rhs) {
		output << "cluster Id: " << rhs.m_clusterId << "\tObject Id : "
				<< rhs.m_id << "\tCreation time : " << rhs.m_time << endl;
		return output;
	}
};

bool myComparatorBasedOnManagedId(const ManagedObject& lhs,
		const ManagedObject& rhs) {
	return lhs.m_id < rhs.m_id;
}

bool myComparatorBasedOnTimeStamp(const ManagedObject& lhs,
		const ManagedObject& rhs) {
	return lhs.m_time < rhs.m_time;
}

bool isMGW(const ManagedObject& mo) {
	if (mo.m_clusterId == string("MGW"))
		return true;
	return false;
}

class MyFunctionOverloadedClass {
public:
	string m_neType;
	MyFunctionOverloadedClass(const string& ne) {
		m_neType = ne;
	}

	bool operator()(const ManagedObject& mo) {
		if (mo.m_clusterId == m_neType)
			return true;
		return false;
	}
};

int main() {

	fstream myFile("managed_objects_new.txt");
	vector<ManagedObject> mos;

	copy(istream_iterator<ManagedObject>(myFile),
			istream_iterator<ManagedObject>(), back_inserter(mos));

	MyFunctionOverloadedClass mgwFunc("MGW");

	int countOfMGW = count_if(mos.begin(), mos.end(), mgwFunc);

	cout << " The number of occurance of MGW is " << countOfMGW << endl;

	return 0;
}

#endif
