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
        // int print = 0;
        // int

        while (col <= num)
        {
            char ch = 'A';
            cout << ch << " ";

            ch = ch + 1;

            col++;
        }
        cout << endl;
        row++;
    }
}