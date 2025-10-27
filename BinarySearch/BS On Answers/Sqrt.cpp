// https://leetcode.com/problems/sqrtx/

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 1 || x == 0)
        {
            return x;
        }
        int start = 1;
        int end = x;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            // Note: integer overflow so promoted to long long
            if (1LL * mid * mid <= x)
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
};