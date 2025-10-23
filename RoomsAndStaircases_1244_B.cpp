// https://codeforces.com/problemset/problem/1244/B
// [type: div2]
// [problem: 1244/B]
// [tag: implementation]
// [favorite]

#include <iostream>
#include <algorithm>
using namespace std;

int findMaxRoomsCanVisit(string &s)
{
    int n = s.size();
    int maxRoomsReachable = 0;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            maxRoomsReachable = (i + 1) * 2; // go back from ith position
            count += 2;// can visit two rooms
        }
        else
        {
            count += 1;// visit only one room
        }
    }

    return max(maxRoomsReachable, count);
}

int solve(string s)
{
    int forward = findMaxRoomsCanVisit(s);
    reverse(s.begin(), s.end());
    int backward = findMaxRoomsCanVisit(s);
    return max(forward, backward);
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        s.reserve(n);
        cin >> s;

        cout << solve(s) << endl;
    }
    return 0;
}
