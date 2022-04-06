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

        while (col <= row)
        {

            cout << (row - col + 1) << " ";

            col++;
        }
        cout << endl;
        row++;
    }
}