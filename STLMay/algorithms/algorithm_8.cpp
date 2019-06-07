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
#include<set>
#include<sstream>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

class Resource {
public:
	string m_resourceName;
	set<string> m_permissionRequired;
	Resource(const string& resrId, const string& resourcePermissions) {
		m_resourceName = resrId;
		istringstream iss(resourcePermissions);
		copy(istream_iterator<string>(iss), istream_iterator<string>(),
				inserter(m_permissionRequired, m_permissionRequired.begin()));
	}
};

class User {
public:
	string m_userName;
	set<string> m_hasPermissions;
	User(const string& user, const string& userPermissions) {
		m_userName = user;
		istringstream iss(userPermissions);
		copy(istream_iterator<string>(iss), istream_iterator<string>(),
				inserter(m_hasPermissions, m_hasPermissions.begin()));
	}

	bool hasPermissionOn(const Resource& resrc) {
		vector<string> inters;
		set_intersection(m_hasPermissions.begin(), m_hasPermissions.end(),
				resrc.m_permissionRequired.begin(),
				resrc.m_permissionRequired.end(), back_inserter(inters));
		return !(inters.empty());
	}
};

int main() {

	Resource mgwResource("MGW-1", "permMGWUser permFaultMgmt permSuperUser");

	Resource imsResource("IMS-1", "permMGWUser permFaultMgmt permSuperUser");

	User loggedUser("mgw-user", "permMGWUser permFaultMgmt permSecurityMgmt");

	cout << loggedUser.hasPermissionOn(mgwResource);

	return 0;

}

#endif
