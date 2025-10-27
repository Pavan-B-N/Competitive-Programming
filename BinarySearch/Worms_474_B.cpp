// https://codeforces.com/problemset/problem/474/B
// [type: div4]
// [problem: 1676/E]
// [tag: implementation, binary_search, queries]
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findPileNumberForDesiredJuicyWorm(vector<int> &prefixSum, int target)
{
    int lb = lower_bound(prefixSum.begin(), prefixSum.end(), target) - prefixSum.begin();
    return lb + 1;
}

// consecutive  = so sorting cannot be done
void solve(vector<int> &arr, int n, int queries)
{
    // compute prefixSum
    vector<int> prefixSum(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefixSum[0] = arr[0];
        }
        else
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
    }

    // process queries
    for (int i = 0; i < queries; i++)
    {
        int query;
        cin >> query;
        cout << findPileNumberForDesiredJuicyWorm(prefixSum, query) << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int queries;
    cin >> queries;
    solve(arr, n, queries);
    return 0;
}
