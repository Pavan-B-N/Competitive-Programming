// https://codeforces.com/problemset/problem/1027/A
// [type: div2]
// [problem: 1027/A]
// [tag: strings, implementation, constructive]
// [favorite]

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

/*
You are given a string s consisting of n lowercase Latin letters. n is even.

For each position i (1≤i≤n) in string s
you are required to change the letter on this position either to the previous letter in alphabetic order or to the next one (letters 'a' and 'z' have only one of these options). Letter in every position must be changed exactly once.

For example, letter 'p' should be changed either to 'o' or to 'q', letter 'a' should be changed to 'b' and letter 'z' should be changed to 'y'.
*/

bool solve(int i, int j, const string &s)
{
    if (i >= j)
        return true; // base case

    bool canMatch = (abs(s[i] - s[j]) == 0 || abs(s[i] - s[j]) == 2);

    if (!canMatch)
        return false;

    return solve(i + 1, j - 1, s);
}

bool isPalindromicTwistRecursive(const string &s)
{
    int n = s.size();
    return solve(0, n - 1, s);
}

bool isPalindromicTwistIterative(const string &s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        bool canMatch = (abs(s[i] - s[j]) == 0 || abs(s[i] - s[j]) == 2);
        if (!canMatch)
            return false;
        i++;
        j--;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int len;
        cin >> len;
        string s;
        s.reserve(len);

        cin >> s;

        if (isPalindromicTwistIterative(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
