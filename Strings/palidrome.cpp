// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ReverseString(char name[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

bool checkPalidrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < +end)
    {
        if (name[start] != name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
        return 1;
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your beautiful name: ";
    cin >> name;

    cout << "Your name is " << name;
    int len = getLength(name);

    int answer = checkPalidrome(name, len);

    if (answer == 1)
    {
        cout << " Its an Palidrome.";
    }
    else
    {
        cout << " No It's Nott.";
    }
    // int reverseText = ReverseString(name, len);
    // cout << " in case you forgot about that and I think you got a better one " << endl;
    // cout << "And index value is: " << len << endl;
    // ReverseString(name, len);
    // cout << "And your reverse name is: " << name << endl;
    // cout << reverseText;

    return 0;
}