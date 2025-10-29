// https://codeforces.com/problemset/problem/1635/A
// [type: div2]
// [problem: 1635/A]
// [tag: bitmask,greedy]
#include <iostream>
#include <vector>
using namespace std;

// (0≤ai<2^30)
// 2^30 is within the int range
int  findMinSumOfArray(vector<int > &arr){
    int  ans=0;

    for(int  ele:arr){
        ans=ans | ele;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;

    vector<int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    cout<<findMinSumOfArray(arr)<<endl;
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
