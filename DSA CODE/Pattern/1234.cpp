#include <iostream>
using namespace std;

int main()
{
    cout << "ENter Num : ";
    int num;
    cin >> num;

    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}