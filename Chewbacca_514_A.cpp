// https://codeforces.com/contest/514/problem/A
// https://codeforces.com/problemset/problem/514/A

// [type: div2]
// [problem: 514/A]
// [tag: implementation, greedy]

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Note: The decimal representation of the final number shouldn't start with a zero.
// x (1 ≤ x ≤ 10^18) , so choose string as a input and output
string getMinimalPositiveNumber(string x){
    string ans;
    for(int i=0;i<x.size();i++){
        int digit=x[i]-'0';
        int flip=9-digit;
        if(i==0 && min(digit,flip)==0){
            ans.push_back(digit+'0');
        }else{
            ans.push_back(min(digit,flip)+'0');
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    string x;
    cin>>x;
    cout<<getMinimalPositiveNumber(x)<<endl;
    return 0;
}
