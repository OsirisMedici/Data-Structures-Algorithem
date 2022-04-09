#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a Number You want binery form: ";
    int deci;
    cin >> deci;

    int i = 0;
    int ans = 0;

    while (deci != 0)
    {
        int bit = deci & 1;
        ans = (bit * pow(10, i)) + ans;

        deci = deci >> 1;
        i++;
    }
    cout << "Your Answer is: " << ans << endl;
}



// there is a problem in this code----> in some numbers it did not spiting the binery form 
// for ex.23
