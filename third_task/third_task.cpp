// third_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("Please enter your name, age, gender, address, married(true/false), height(in metres).\n");
    char name[999];
    int age;
    char gender[999];
    char address[999];
    int married;
    float height;

    scanf_s("%s", &name, 999);
    scanf_s("%d", &age, 3);
    scanf_s("%s", &gender, 999);
    scanf_s("%s",&address, 999);
    scanf_s("%d", &married, 4);
    scanf_s("%f", &height, 999);

    printf("%s", &name, "\n");
    printf("%d", &age, "\n");
    printf("%s", &gender, "\n");
    printf("%s", &address, "\n");
    printf("%d", &married, "\n");
    printf("%f", &height, "\n");

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
