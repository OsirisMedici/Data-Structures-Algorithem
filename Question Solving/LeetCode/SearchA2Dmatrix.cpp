#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = matrix.size();
    int col = matrix[0].size();
    int target;
    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        int element = matrix[row / 2][row % 2];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
