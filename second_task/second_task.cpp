// second_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

	cout << "Please enter your name, age, gender, address, married(true/false), height(in metres)." << endl;
	string name;
	int age;
	string gender;
	string address;
	bool married;
	string areyoumarried;
	float height;

	cin >> name;
	cin >> age;
	cin >> gender;
	getline(cin >> ws,address);//ws means whitespace
	cin >> boolalpha >> married;//gets the boolean value of your string entry
	cin >> height;

	if (married == true) {//used to get the print ''married'' or ''not married'' at the printout
		areyoumarried == "married";
	}
	else {
		areyoumarried == "not married";
	}

	cout << name << " " << age << " " << gender << " " << address << " " << areyoumarried << " " << height << endl;


	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
