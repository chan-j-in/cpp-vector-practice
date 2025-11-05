#include <iostream>
#include "CVector.h"

using namespace std;

int main() {
	CVector<int> vecInt(100);

	//vecInt.reserve(100);

	for (int i = 0; i < 100; i++) {
		vecInt.push_back(i + 1);
	}

	cout << vecInt.getSize() << endl;
	cout << vecInt.getCapacity() << endl;

	for (unsigned int i = 0; i < vecInt.getSize(); i++) {
		cout << vecInt[i] << endl;
	}

	return 0;
}