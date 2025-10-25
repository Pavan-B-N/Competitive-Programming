// https://codeforces.com/problemset/problem/1743/A
// [type: div2]
// [problem: 1743/A]
// [tag: implementation, math, combinatorics]
// [favorite]

#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    if (n < r)
        return 0;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int countSequences(int n)
{
    return nCr(10 - n, 2) * nCr(4, 2);
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
        }
        cout << countSequences(n) << endl;
    }
    return 0;
}
