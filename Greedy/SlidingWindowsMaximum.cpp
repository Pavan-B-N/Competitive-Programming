// https://leetcode.com/problems/sliding-window-maximum/
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> dq; // stores indices
        for (int i = 0; i < k; i++)
        {
            // remove smaller elements which doesn't help
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        vector<int> ans;
        for (int i = k; i < nums.size(); i++)
        {
            ans.push_back(nums[dq.front()]);

            // remove not part of the window
            while (!dq.empty() && (i - dq.front()) >= k)
            {
                dq.pop_front();
            }

            // remove smaller elements which doesn't help
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);

        return ans;
    }
};