#include <iostream>
using namespace std;

void main()
{
	void task1();
	void task2();
	void task3();
	// declarations for tasks
	string h;
	cin >> h;//input
	while (true) {//infinite loop to choose task to check

		if (h == "task1") {
			task1();
		}

		else if (h == "task2") {
			task2();
		}

		else if (h == "task3") {
			task3();
		}

		else {
			cout << "no valid input" << endl;
		}
	}


	void task1();
	{
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
	}
	system("pause");
	return;

}