// https://codeforces.com/problemset/problem/1389/A/
// [type: div2]
// [problem: 1389/A]
// [tag: implementation,constructive, math, greedy]

#include <iostream>
using namespace std;

//  (if there are multiple valid answers, you may print any of them).

// You are given two integers l and r . Find two integers x and y such that l≤x<y≤r and l≤LCM(x,y)≤r.
// l and r (1≤l<r≤10 ^ 9).
void solve()
{
    long long l, r;
    cin >> l >> r;

    // ensures x < y
    long long x = l;
    long long y = 2 * l;

    // l ≤ x < y ≤ r
    // l ≤ LCM(x,y) ≤ r.
    // lcm(l,2*l) = l
    if (y <= r)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << "-1 -1" << endl;
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
