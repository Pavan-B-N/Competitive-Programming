// https://codeforces.com/problemset/problem/110/A
// [type: div2]
// [problem: 110/A]
// [tag: implementation,constructive]

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// | Type        | Max value                 | Max power of 2 | Max power of 10 |
// | ----------- | ------------------------- | -------------- | --------------- |
// | `int`       | 2,147,483,647             | 2^30           | 10^9            |
// | `long long` | 9,223,372,036,854,775,807 | 2^62           | 10^18           |

//  (1 ≤ n ≤ 10 ^ 18).
bool isLuckyNumber(long long n){
    int countLuckyDigits=0;
    while(n>0){
        int digit=n%10;
        n/=10;
        if(digit==4 || digit==7) countLuckyDigits++;
    }

    return countLuckyDigits==4 || countLuckyDigits==7;
}

int main(int argc, char const *argv[])
{
    long long n;
    cin>>n;

    if(isLuckyNumber(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
