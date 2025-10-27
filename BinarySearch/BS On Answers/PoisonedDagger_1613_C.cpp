// https://codeforces.com/problemset/problem/1613/C
// [type: div2]
// [problem: 1613/C]
// [tag:  binary_search]

#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

bool canKill(vector<long long> &a, long long k, long long h)
{
    long long total = 0;
    int n = a.size();
    for (int i = 0; i  < n-1; i++)
    {
        total += min(k, a[i + 1] - a[i]);
        if (total >= h)
            return true;
    }
    total += k;
    return total >= h;
}

void solve(int n, long long h, vector<long long> &a)
{
    long long low = 1, high = h;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (canKill(a, mid, h))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long h;
        cin >> n >> h;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        solve(n, h, a);
    }
    return 0;
}
