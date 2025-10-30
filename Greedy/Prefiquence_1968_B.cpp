// https://codeforces.com/problemset/problem/1968/B
// [type: div3]
// [problem: 1968/B]
// [tag: greedy, two pointer]

#include <iostream>
using namespace std;

int getMaxPossibleSubsequenceLength(string &a,string &b,int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            i++;
        }
        j++;
    }

    return i;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;
    a.reserve(n);
    b.reserve(m);

    cin>>a>>b;

    cout<<getMaxPossibleSubsequenceLength(a,b,n,m)<<endl;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
