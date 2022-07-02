#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int TwoSum(int arr[], int nums, int target)
{
    for (int i = 0; i < nums - 2; i++)
    {

        int answer;
        for (int j = 0; j < nums - 1; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
                // cout << "answer" << endl;
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int nums[7] = {2, 7, 11, 15, 65, 9, 0};
    int target = 9;

    cout << "answer is: " << TwoSum(nums, 7, target) << endl;

    return 0;
}