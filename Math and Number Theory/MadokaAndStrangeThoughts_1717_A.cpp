// https://codeforces.com/problemset/problem/1717/A
// [type: div2]
// [problem: 1717/A]
// [tag: number theory, math]

#include <iostream>
using namespace std;
// for logic refer samsung notes
int maxPossiblePairs(int n){
    int one=n;
    int two=(n/2)*2;
    int three=(n/3)*2;
    return one+two+three;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<maxPossiblePairs(n)<<endl;
    }
    return 0;
}
