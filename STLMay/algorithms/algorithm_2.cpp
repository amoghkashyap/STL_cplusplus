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

	bool operator<(const ManagedObject& rhs) const{ 	// < not valid for managedObject(available for int, string)
		return m_clusterId < rhs.m_clusterId;
	}

	friend istream& operator>>(istream& input, ManagedObject& rhs) {
		input >> rhs.m_clusterId >> rhs.m_id;
		return input;
	}
	friend ostream& operator<<(ostream& output, const ManagedObject& rhs) {
		output << "cluster Id: " << rhs.m_clusterId << "\tObject Id : "
				<< rhs.m_id << endl;
		return output;
	}
};

bool myComparatorBasedOnManagedId(const ManagedObject& lhs, const ManagedObject& rhs){
	return lhs.m_id < rhs.m_id;
}

int main() {

	fstream myFile("managed_objects.txt");
	vector<ManagedObject> mos;

	copy(istream_iterator<ManagedObject>(myFile),
			istream_iterator<ManagedObject>(), back_inserter(mos));

	sort(mos.begin(),mos.end(),myComparatorBasedOnManagedId);

	copy(mos.begin(), mos.end(), ostream_iterator<ManagedObject>(cout, " "));

	return 0;
}

#endif
