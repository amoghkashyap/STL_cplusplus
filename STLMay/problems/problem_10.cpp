#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<functional>
#include<set>

using namespace std::placeholders;
using namespace std;

//#define MYMAIN
#ifdef MYMAIN

int functionTmp(int a , int b, int c){
	return a+b+c;
}

int main() {

	vector<int> firstBatch = { 1, 3, 4, 5, 7, 8, 9 };

	auto fnGr5 = bind(greater<int>(), _1, 5);

	auto fnLs5 = bind(greater<int>(), 5, _1);

	cout << count_if(firstBatch.begin(), firstBatch.end(), fnGr5);

	auto fn = bind(functionTmp, _1, 2, 4);

	cout << endl << fn(5);

	auto fnc = bind(functionTmp, _1, 2, _2);
	cout << endl << fnc(5,9);

	return 0;
}

#endif
