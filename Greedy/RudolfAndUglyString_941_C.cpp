// https://codeforces.com/contest/1941/problem/C
// [type: div3]
// [problem: 1941/C]
// [tag: strings, dp,greedy]

#include <iostream>
#include <string>
using namespace std;

int minCharsToRemove(string &s)
{
    int count = 0;
    int n = s.size();

    for (int i = 0; i < n - 2; i++)
    {
        string substr = s.substr(i, 3);
        if (substr == "map" || substr == "pie")
        {
            count++;
            i += 2; // skip next 2 chars to avoid overlapping matches
        }
    }

    return count;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    s.reserve(n);

    cin >> s;

    cout << minCharsToRemove(s) << endl;
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
