// fifth_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

    int x;
    cout << "please enter a natural number(no negative numbers): " << endl;
    cin >> x;
    if (x < 0) {
        cout << "Error! Input cannot be negative" << endl;
    }
    else {
        int z = x;
        while (x >= 1) {
            cout << x << endl;
            x = x - 1;
        }
        while (x <= z) {
            cout << x << endl;
            x = x + 1;
        }
    }

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
