#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int row = 1;

    while (row <= a)
    {

        int col = 1;
        while (col <= a)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}