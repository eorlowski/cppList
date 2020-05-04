#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	list<int> intList;
	intList.push_back(1);
	intList.push_back(2);

	for (int elem : intList) {
		cout << "Found list element: " << elem << endl;
	}

	string a = "Hello";

	cout << a << endl;

	cout << a.substr(2, 2) << endl;

	return 0;
}
