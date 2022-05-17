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

        while (col <= row)
        {
            char ch = ('A' + row - 1);
            cout << ch << " ";

            col++;
        }
        cout << endl;
        row++;
    }
}