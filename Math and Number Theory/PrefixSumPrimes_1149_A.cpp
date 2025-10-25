// https://codeforces.com/problemset/problem/1149/A

// [type: div1]
// [problem: 1149/A]
// [tag: greedy, math, number theory, constructive]
// [favorite]
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ones=0;
    int twos=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x==1) ones++;
        else twos++;
    }

    if(twos==0){
        for(int i=0;i<ones;i++) cout<<1<<" ";
    }else if(ones==0){
        for(int i=0;i<twos;i++) cout<<2<<" ";
    }else{
        cout<<"2 1 ";
         for(int i=0;i<twos-1;i++) cout<<2<<" ";
         for(int i=0;i<ones-1;i++) cout<<1<<" ";
    }
    return 0;
}
