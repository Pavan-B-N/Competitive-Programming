// https://codeforces.com/problemset/problem/1238/A

// [type: div2]
// [problem: 1238/A]
// [tag: math, number theory, constructive]

#include <iostream>
#include <string>
using namespace std;

// 10 ^ 18
bool canYouMakeEqual(long long x, long long y)
{
    long long diff = x - y;
    return diff != 1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        long long x, y;
        cin>>x>>y;
        if(canYouMakeEqual(x,y)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
