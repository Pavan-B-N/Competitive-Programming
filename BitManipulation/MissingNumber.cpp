// https://leetcode.com/problems/missing-number/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // USING BIT MANIPULATION
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        int xorVal = n;
        // because numbers are in the range [0,n]
        for (int i = 0; i < n; ++i)
        {
            xorVal ^= i ^ nums[i];
        }
        return xorVal;
    }

    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        cyclicSort(nums);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }
        return n;
    }

    void cyclicSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] != i && nums[i] < nums.size())
            {
                swap(nums[i], nums[nums[i]]);
            }
        }
    }
};