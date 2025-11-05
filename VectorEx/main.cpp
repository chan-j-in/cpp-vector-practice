#include <iostream>
#include "CVector.h"

using namespace std;

int main() {
	CVector<int> vecInt;

	for (int i = 0; i < 100; i++) {
		vecInt.push_back(i + 1);
	}

	cout << vecInt.getSize() << endl;
	cout << vecInt.getCapacity() << endl;
	return 0;
}