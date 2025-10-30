// https://codeforces.com/problemset/problem/1927/A
// [type: div3]
// [problem: 1927/A]
// [tag: strings, greedy]

#include <iostream>
using namespace std;

int minLengthToPaint(string &s,int n){
    int i=0;
    int j=n-1;
    while(s[i]!='B' || s[j]!='B'){
        if(s[i]=='W') i++;
        if(s[j]=='W') j--;
    }

    return j-i+1;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    cout<<minLengthToPaint(s,n)<<endl;
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
