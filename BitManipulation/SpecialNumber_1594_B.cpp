// https://codeforces.com/contest/1594/problem/B
// [type: div2]
// [problem: 1594/B]
// [tag: bitmask, math]

#include <iostream>
using namespace std;

long long findKthSpecialNumber(long long n, long long k)
{
    long long powOfN = 1;
    long long ans = 0;
    long long mod = 1e9 + 7;

    while (k != 0)
    {
        if (k & 1 > 0)
        {
            ans = (ans + powOfN) % mod;
        }
        k = k >> 1;
        powOfN = (powOfN * n) % mod;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << findKthSpecialNumber(n, k) << endl;
    }
    return 0;
}
