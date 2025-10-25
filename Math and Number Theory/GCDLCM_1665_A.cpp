// https://codeforces.com/problemset/problem/1665/A
// [type: div2]
// [problem: 1665/A]
// [tag: constructive, math]

#include <iostream>
using namespace std;

// If there are several possible answers you can output any of them. It is possible to show that the answer always exists.
void printDigits(int n){
    cout<<(n-3)<<" 1 1 1 "<<endl;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printDigits(n);
    }
    return 0;
}
