#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cout << "Enter a number you want to know factorial: ";
    cin >> limit;

    int factorial = 1;

    for (int i = 1; i <= limit; i++)
    {
        factorial = factorial * i;
    }

    cout << "You Factorial is: " << factorial;
}