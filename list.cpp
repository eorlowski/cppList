#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv) {

	list<int> intList;
	intList.push_back(1);
	intList.push_back(2);

	for (int elem : intList) {
		cout << "Found list element: " << elem << endl;
	}

	return 0;
}
