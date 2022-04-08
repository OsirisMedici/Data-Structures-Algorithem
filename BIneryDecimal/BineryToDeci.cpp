#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a Number You want binery form: ";
    int n;
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n != 0)
    {

        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << "YOur answer is: " << ans << endl;
}