#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	list<int> intList;
	intList.push_back(1);
	intList.push_back(2);

	int result;

	for (int elem : intList) {
		cout << "Found list element: " << elem << endl;
	}

	string a = "Hello";

	cout << a << endl;

	cout << a.substr(2, 2) << endl;

	cout << "Does the string contain ello?:" << a.find("llo") << endl;
	// Is cast needed to get a signed int?
	cout << "Does the string contain ello?:" << (int) a.find("abc") << endl;

	result = a.find("abd");
	cout << "Result is: " << result << endl;

	if (result == -1) {
		cout << "Found abd in string" << endl;
	}
	else {
		cout << "Did NOT found abd in string" << endl;
	}

	return 0;
}
