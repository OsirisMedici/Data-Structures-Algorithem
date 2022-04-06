#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a +ve or -ve number: ";
    cin >> a;

    if (a > 0)
    {
        cout << "A is a positive number:" << endl;
    }
    else
    {
        cout << "A is a negative number " << endl;
    }
}