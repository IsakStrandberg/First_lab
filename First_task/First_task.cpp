#include <iostream>
using namespace std;

void main()
{
	// different loops!
	int n;
	cin >> n;
	for (n; n > 0; n--) {
		cout << "Hello world" << endl;
	}

	int x;
	cin >> x;
	while (x > 0) {
		x = x - 1;
		cout << "Hello world" << endl;
	}

	int z;
	cin >> z;
	do {
		z = z - 1;
		cout << "Hello world" << endl;
	} while (z > 0);

	system("pause");
	return;

}