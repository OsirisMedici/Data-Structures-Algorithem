#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit = 11;
    int sum = 0;

    for (int i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }
    cout << "Total sum:" << sum;
}