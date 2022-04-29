#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Limit: ";
    int num;
    cin >> num;

    int row = 1;
    int print = 0;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            print = print + 1;
            cout << print << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}