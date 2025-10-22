// https://codeforces.com/problemset/problem/2044/A

// [type: div4]
// [problem: 2044A]
// [tag: math]

#include <iostream>
using namespace std;

void findPairs()
{
    int n;
    cin >> n;
    int pairs = 0;
    for (int a = 1; a < n; a++)
    {
        for (int b = 1; b < n; b++)
        {
            if (a + b == n)
                pairs++;
        }
    }

    cout << pairs << endl;
}
void findPairsOptimal()
{
    int n;
    cin >> n;

    cout << n - 1 << endl;
}

int main()
{
    int t;
    // input number of test cases
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        findPairsOptimal();
    }

    return 0;
}