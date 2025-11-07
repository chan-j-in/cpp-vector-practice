#include <iostream>
#include "CVector.h"

using namespace std;

int main() {
	CVector<int> vecInt(55);
	CVector<int>::iterator iter;

	for (int i = 0; i < 100; i++) {
		vecInt.push_back(i + 1);
	}

	cout << vecInt.getSize() << endl;
	cout << vecInt.getCapacity() << endl;

	for (iter = vecInt.begin(); iter!=vecInt.end() ; ++iter) {
		cout << *iter << endl;
	}
	
	return 0;
}