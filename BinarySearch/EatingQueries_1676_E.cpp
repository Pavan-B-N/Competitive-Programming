// https://codeforces.com/problemset/problem/1676/E
// [type: div4]
// [problem: 1676/E]
// [tag: sorting, binary_search, queries]
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minCandiesToAchieveTarget(vector<int> &prefixSum, int target)
{
    int lb = lower_bound(prefixSum.begin(), prefixSum.end(), target) - prefixSum.begin();
    if (lb < prefixSum.size())
    {
        // return prefixSum[lb]==target ? lb+1 : lb;
        return lb + 1;
    }

    return -1;
}

// nlogn + qlogn
void solve(vector<int> &arr,int n,int queries)
{
    // sort the array in the reverse order
    sort(arr.rbegin(),arr.rend());

    // compute prefixSum
    vector<int> prefixSum(n, 0);
    for (int i = 0; i < arr.size(); i++)
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

    // input queries
    for (int i = 0; i < queries; i++)
    {
        int query;
        cin >> query;
        cout << minCandiesToAchieveTarget(prefixSum, query) << endl;
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        // input array
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr,n,q);
    }
    return 0;
}
