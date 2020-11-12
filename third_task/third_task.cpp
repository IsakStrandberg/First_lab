// third_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("Please enter your name, age, gender, address, married(1/0), height(in metres).\n");
    char name[999];
    int age = 0;
    char gender[999];
    char address[999];
    int married = 0;
    float height = 0.0;

    printf("name: ");
    scanf_s("%[^\r\n]s", name, 999);// gör & automaiskt

    printf("age: ");
    scanf_s(" %d", &age);

    printf("gender: ");
    scanf_s(" %[^\r\n]s", gender, 999);

    printf("address: ");
    scanf_s(" %[^\r\n]s", address, 999);// [^] <- läser in alla tecken till den hittar \r eller \n

    printf("married(1/0): ");
    scanf_s(" %d", &married);

    printf("height: ");
    scanf_s(" %f", &height);

    printf("name: %s\n", name);// gör & automatisk
    printf("age: %d\n", age);
    printf("gender: %s\n", gender);
    printf("address: %s\n", address);
    printf("married: %d\n", married);
    printf("height: %g\n", height);

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
