// https://codeforces.com/problemset/problem/1352/A

// [type: div4]
// [problem: 1352/A]
// [tag: math, implementation]
#include <iostream>
#include <vector>
using namespace std;

// (1≤n≤104).
vector<int> printRoundNumbers()
{
    int n;
    cin >> n;
    int multipleOf10 = 1;
    vector<int> ans;
    // reverse traversal of the number
    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;

        if (digit != 0)
        {
            int roundNumber = digit * multipleOf10;
            ans.push_back(roundNumber);
        }
        multipleOf10 *= 10;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> ans = printRoundNumbers();
        // print according to output format
        cout << ans.size() << endl; // prints number of summands (addends).
        for (int roundNumber : ans)
        {
            cout << roundNumber << " ";
        }
        cout << endl;
    }
    return 0;
}
