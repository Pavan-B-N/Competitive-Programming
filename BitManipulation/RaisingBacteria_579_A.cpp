// https://codeforces.com/problemset/problem/579/A
// [type: div2]
// [problem: 579/A]
// [tag: bitmask]
#include <iostream>
using namespace std;

// brian kernighan's algorithm
int minDays(int x)
{   
    // its just finding the no of set bits
    // if bit is 1 we add 1 bacteria to the box on the ith day
    // if the bit is 0 then we don't add any bacteria in the box
    // 23 = 10111
    // 1,2,4+1,10+1,22+1 = 23
    int count=0;
    while(x){
        x= x & (x-1);
        count++;
    }
    return count;
}


int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    cout<<minDays(x)<<endl;
    return 0;
}
