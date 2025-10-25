// https://codeforces.com/problemset/problem/913/A

#include <iostream>
using namespace std;

int solve(int n, int m)
{
    if (n >= 31) // 2^31 > 1e9
        return m;
    int twoPowN = 1 << n;
    return m % twoPowN;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << solve(n, m);
    return 0;
}
