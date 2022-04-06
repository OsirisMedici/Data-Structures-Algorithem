#include <iostream>
using namespace std;

int main()
{
    int inp;
    int a = 1;

    cout << "Enter a Number till you want the sum: ";
    cin >> inp;

    int sum = 0;

    while (a <= inp)
    {
        sum = sum + a;
        a++;
    }

    cout << "Total sum is :" << sum << endl;
}