#include <iostream>
using namespace std;

int findPoWMod(int x,int n,int mod){
    int ans=1;
    while(n>0){
        if(n%2==1){
            // ans = ans *x;
            // (a*b)%mod = ((a%mod) * (b%mod))%mod 
            ans = ((ans%mod) * (x%mod)) % mod;
            n--;
        }

        // x=x*x;
        x=( (x%mod) * (x%mod) )%mod;
        n/=2;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int x,n,mod;
    cin>>x>>n>>mod;
    cout<<findPoWMod(x,n,mod);
    return 0;
}
