// https://codeforces.com/problemset/problem/1527/A
// [type: div2]
// [problem: 1527/A]
// [tag: bitmask]

#include <iostream>
#include <vector>
using namespace std;

// bruteForce
// TLE
int findKBF(int n)
{
    for (int i = n; i >= 1; i--)
    {
        n = n & i;
        if (n == 0)
            return i;
    }
    return 0;
}

int findK(int n)
{
    // count all bits
    int count = 0;
    while (n != 0)
    {
        n = n >> 1;
        count++;
    }

    return (1 << (count - 1)) - 1;
}

int solve()
{
    int n;
    cin >> n;

    return findK(n);
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
