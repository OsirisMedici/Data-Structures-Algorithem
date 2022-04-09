#include <iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;
    for (int i = 0; i <= n; i++)
    {

        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int nume = Factorial(n);

    int demon = Factorial(r) * Factorial(n - r);

    int answer = nume / demon;
    return answer;
    // cout << answer << endl;
}

int main()
{
    int n, r;
    cout << "Enter n: " << ;
    cin >> n;
    cout << "Enter r: " << ;
    cin >> r;

    cout << "Answer is " << nCr(n, r) << endl;
    return 0;
}
