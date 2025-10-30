// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum == target)
            {
                return {i + 1, j + 1};
            }
            else if (sum > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return {-1, -1};
    }
};