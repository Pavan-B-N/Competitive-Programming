// https://codeforces.com/contest/1974/problem/B
// [type: div3]
// [problem: 1974/B]
// [tag: strings, implementation,sorting]

#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
using namespace std;

string encode(string &s)
{
    // step1: find unique charactes
    unordered_set<char> hashSet(s.begin(), s.end());

    // step2: store unique characters in the alphabetical order in r
    string r;
    for (char ch : hashSet)
        r.push_back(ch);

    sort(r.begin(), r.end());

    // step 3 create a encodingMap
    unordered_map<char, char> encodingMap;
    for (int i = 0; i < r.size(); i++)
    {
        encodingMap[r[i]] = r[r.size() - i - 1];
    }

    // step4: build encoded string ans
    string ans;
    for (char ch : s)
    {
        ans.push_back(encodingMap[ch]);
    }

    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    s.reserve(n);

    cin >> s;

    cout << encode(s) << endl;
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
