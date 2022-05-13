#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int powerNum(int a, int b)
{
    /// base case
    if (b == 0)
    {
        return 0;
    }
    if (b == 1)
    {
        return a;
    }

    // recursion relation
    int ans = powerNum(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }

    // return powerNum;
}

int main()
{
    int a, b;
    cout << "Enter a Number : ";
    cin >> a;
    cout << "and then it's power respectively: ";
    cin >> b;

    int answer = powerNum(a, b);
    cout << "The Final Answer is: " << answer << endl;

    return 0;
}