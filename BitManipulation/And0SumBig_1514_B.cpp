// https://codeforces.com/problemset/problem/1514/B
// [type: div2]
// [problem: 1514/B]
// [tag: bitmask,combinatorics, math, number theory]

#include <iostream>
#include <vector>
using namespace std;

// answer is n^k
// because the answer is too large we need to take mod 1e9
// so ans = (n^k) % 1e9
long long findPoWMod(long long x, long long n, long long mod)
{
    long long ans = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            // ans = ans *x;
            // (a*b)%mod = ((a%mod) * (b%mod))%mod
            ans = ((ans % mod) * (x % mod)) % mod;
            n--;
        }

        // x=x*x;
        // x<=10 ^5
        // x*x around 10 ^ 10 plus
        x = ((x % mod) * (x % mod)) % mod;
        n /= 2;
    }

    return ans;
}

int getMaxSum(){
    long long n,k;
    cin>>n>>k;

    return findPoWMod(n,k,1e9+7);
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        cout<<getMaxSum()<<endl;
    }
    return 0;
}
