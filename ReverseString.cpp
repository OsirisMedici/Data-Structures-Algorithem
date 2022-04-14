#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ReverseString(char name[], char size)
{
    char start = 0;
    char end = size - 1;
    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end = end--;
    }
    // return 0;
}

int main()
{
    char name[20];
    cout << "Enter your beautiful name: ";
    cin >> name;

    cout << "Your Reverse name is " << ReverseString(name);
    cout << " HAHAHAHAH FUNNZZ " << endl;

    return 0;
}