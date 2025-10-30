// https://codeforces.com/contest/1935/problem/A
// [type: div2]
// [problem: 1935/A]
// [tag: strings, constructive]

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string getLexicographicallySmallest(string &s, int n)
{
    string rev = s;
    reverse(rev.begin(), rev.end());

    // You are given a string s and an even integer n
    // reversing the string even number of times will return n always
    return min(s, rev + s);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << getLexicographicallySmallest(s, n) << '\n';
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
