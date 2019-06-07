#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[]) {
	vector<string> words = { "Hello", "How", "Greater", "Lesser", "Tester" };

//   bool greaterThan5(const string& str){
//         if (str.length() > 5)
//              return true;
//         return false;
//   }
	//The above function pointer now needs to be changed to below. Use the above same code with,
	//1> Remove the return type
	//2> Remove the function Name itself and start with [] to indicate it is lambda function
	//3> Copy everything else as it is
	cout << "Elements greater than length 5 with normal lambda "
			<< count_if(words.begin(), words.end(), [](const string& str) {
				if (str.length() > 5)
				return true;
				return false;
			});

	cout << endl;
	//Instead of the functor, you can use lambda capture which will in turn automatically capture the variables above using functor anonymously
	//You can specifically capture the value or use a generic & to capture all variables defined above in the current scope
	// i.e you can use either [&greaterThanCheck] or [&] below to capture everything. You dont need to write a functor in C++11
	unsigned int greaterThanCheck = 6;
	cout << "Elements greater than length 6 with functor type lambda capture "
			<< count_if(words.begin(), words.end(),
					[&greaterThanCheck](const string& str) {
						if (str.length() > greaterThanCheck)
						return true;
						return false;
					});
	return 0;
}
