// https://codeforces.com/contest/912/problem/B
// [type: div2]
// [problem: 912/B]
// [tag: bitmask, number theory]

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n,k;
    cin>>n>>k;

    if(k==1){
        cout<<n<<endl;
    }else{
        long long ans=1;
        while(ans<n){
            ans*=2;
            ans+=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
