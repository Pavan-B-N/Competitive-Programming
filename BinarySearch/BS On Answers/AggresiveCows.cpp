// https://www.geeksforgeeks.org/problems/aggressive-cows/1
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int start = 1;
        int end = stalls[n - 1] - stalls[0];

        int ans;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            // mid acts as minDist
            if (canPlaceKCows(stalls, mid, k))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return end;
    }

    bool canPlaceKCows(vector<int> &stalls, int minDist, int k)
    {
        int cowPlaced = 1;
        int lastCowPosition = 0;

        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - stalls[lastCowPosition] >= minDist)
            {
                cowPlaced++;
                lastCowPosition = i;
            }
        }

        return cowPlaced >= k;
    }
};