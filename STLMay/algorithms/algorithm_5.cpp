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

bool isIPV4(string& addr) {
	if (addr.find('.') != string::npos)
		return true;
	else
		return false;

}

bool isIPV6(string& addr) {
	if (addr.find(':') != string::npos)
		return true;
	else
		return false;

}


int main() {

	vector<string> ipAddresses = { "1.2.3.4", "2.3.4.5", "22::22::21:2",
			"11:211:22:33", "5.4.3.2" };

	int n4 = count_if(ipAddresses.begin(), ipAddresses.end(), isIPV4);
	cout << "occurences of Ipv4 " << n4 << endl;

	int n6 = count_if(ipAddresses.begin(), ipAddresses.end(), isIPV6);
	cout << "occurences of Ipv6 " << n6 << endl;

	if(all_of(ipAddresses.begin(),ipAddresses.end(),isIPV4))
		cout<<" all are IPV4 addresses "<<endl;
	else
		cout<<"  all are not IPV4 addresses "<<endl;

	return 0;

}

#endif
