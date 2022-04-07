#include <iostream>
using namespace std;

int Factorial(int n)
{
    for (int i = 0; i < n; i++)
    {
        int fact = 1;
        fact = fact * i;
        return fact;
    }
}

int nCr(int n, int r)
{
    int nume = Factorial * n;

    int demon = (Factorial * r) * ((n - r) * Factorial);

    int answer = nume / demon;
    return answer;
}

int main()
{
    int n, r;
    cin >> n >> r >> endl;
}

int main(int a, int b)
{
}