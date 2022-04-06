#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number to check prime or Not : ";
    int num;
    cin >> num;
    bool isPrime = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {

            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "It's not an prime Number ";
    }
    else
    {
        cout << "It's an prime Number ";
    }
}