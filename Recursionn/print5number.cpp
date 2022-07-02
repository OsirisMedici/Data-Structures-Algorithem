#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printFun(int input)
{
    // base case
    if (input == 0)
    {
        return;
    }

    cout << input << " ";
    printFun(input - 1);
}

int main()
{
    int input;
    cout << "Enter a Limit: ";

    cin >> input;

    printFun(input);
}