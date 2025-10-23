// https://codeforces.com/problemset/problem/151/A
// [type: div2]
// [problem: 151/A]
// [tag: math, implementation]

#include <iostream>
#include <vector>
#include <algorithm> // min
using namespace std;

// vector based
int solve(vector<int> &arr)
{
    // [n,k,l,c,d,p,nl,np]
    // [0,1,2,3,4,5,6 ,7 ]
    int milkDistribution = (arr[1] * arr[2]) / arr[6]; // (k*l)/nl
    int limeDistribution = (arr[3] * arr[4]);          //(c*d)
    int saltDistribution = (arr[5] / arr[7]);          // (p/np)

    int totalToasts = min({milkDistribution, limeDistribution, saltDistribution});
    return totalToasts / arr[0]; // n
}

// variable based
int findMaxToasts(int n, int k, int l, int c, int d, int p, int nl, int np)
{
    // formulas are obtained by observing the TCs and the explanation given, no logic just observation based problem
    int totalDrinkToasts = (k * l) / nl; // toasts possible from drink
    int totalLimeToasts = c * d;         // toasts possible from lime slices
    int totalSaltToasts = p / np;        // toasts possible from salt

    int maxToastsPerFriend = min({totalDrinkToasts, totalLimeToasts, totalSaltToasts}) / n;
    return maxToastsPerFriend;
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << findMaxToasts(n, k, l, c, d, p, nl, np) << endl;

    return 0;
}