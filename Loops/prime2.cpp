#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to check it's prime or not: ";
    cin >> number;

    int count = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "It's am prime Number";
    }
    else
    {
        cout << "It's not an prime Number.";
    }
}