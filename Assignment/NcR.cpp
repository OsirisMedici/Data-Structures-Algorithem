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
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << "Answer is " << nCr(n, r) << endl;
}
