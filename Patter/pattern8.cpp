#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Limit: ";
    int num;
    cin >> num;

    int row = 1;
    while (row <= num)
    {
        int col = 1;
        // int print = row;
        // int

        while (col <= num)
        {
            char ch = ('A' + col - 1);
            cout << ch << " ";

            col++;
        }
        cout << endl;
        row++;
    }
}