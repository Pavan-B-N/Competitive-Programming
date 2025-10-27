// https://codeforces.com/contest/670/problem/D1
// [type: div2]
// [problem: 670/D1]
// [tag:  binary_search,  implementation]

#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

bool canMakeCookies(vector<int> &a, vector<int> &b, int minCookies, int magicPowder)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] / a[i] < minCookies)
        {
            long long need =(1LL * a[i] * minCookies) - b[i];
            if(need > magicPowder)
                return false;
            magicPowder -= need;
        }
    }

    return true;
}

// k=magicPowder
int solve(vector<int> &a, vector<int> &b, int n, int magicPowder)
{
    int start = 0;
    int end = 1e9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (canMakeCookies(a, b, mid, magicPowder))
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

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << solve(a, b, n, k) << endl;
    return 0;
}
