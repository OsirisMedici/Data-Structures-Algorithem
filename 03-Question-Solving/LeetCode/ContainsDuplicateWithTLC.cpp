#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == nums[i])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int nums[7] = {2, 7, 11, 15, 65, 9, 0};
    // int target = 9;

    containsDuplicate(nums, 7);

    return 0;
}