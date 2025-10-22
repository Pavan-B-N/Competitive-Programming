// https://codeforces.com/problemset/problem/1139/B

// [type: div2]
// [problem: 1139/B]
// [tag: greedy, implementation]
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// after careful observation we can see that chacolates are picked in the ascending order by following the two rules
// xj=0 (you bought zero chocolates of type j)
// xj<xi (you bought less chocolates of type j than of type i)

// n(1 ≤ n ≤ 2⋅10 ^ 5)
// ai(1 ≤ ai ≤ 10 ^ 9)
long long findMaxNumberOfChacolates(vector<long long> &nums)
{
    long long ans = 0;
    long long threshold = INT_MAX;
    // threshold helps to buy chacolates which are less than the chacolates bought in xi
    // so helps to follows the rule xj < xi
    long long i = nums.size() - 1;
    while (i >= 0 && threshold > 0)
    {
        threshold = min(threshold, nums[i]);
        ans += threshold;
        threshold--;// max chacolates can i but at xj is xi-1
        i--;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    // 10 ^ 9
    vector<long long> nums;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        nums.push_back(x);
    }

    cout << findMaxNumberOfChacolates(nums) << endl;
    return 0;
}
