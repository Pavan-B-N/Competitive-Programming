// https://codeforces.com/problemset/problem/507/A
// [type: div2]
// [problem: 287/A]
// [tag: greedy, implementation,sortings]

/*
Amr is a young coder who likes music a lot. He always wanted to learn how to play music but he was busy coding so he got an idea.

Amr has n instruments, it takes ai days to learn i-th instrument. Being busy, Amr dedicated k days to learn how to play the maximum possible number of instruments.
*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> guideToLearnMaxInstruments(vector<int> &instruments,int freeDays){
    vector<pair<int,int>> nums;
    for(int i=0;i<instruments.size();i++){
        // 1 based indexing observed from problem examples
        nums.push_back({instruments[i],i+1});
    }
    sort(nums.begin(),nums.end());

    vector<int> ans;
    for(auto &it:nums){
        int noOfDays=it.first;
        int index=it.second;
        if(noOfDays > freeDays) break;
        ans.push_back(index);
        freeDays-=noOfDays;
    }

    sort(ans.begin(),ans.end());
    return ans;
}

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k;
    vector<int> instruments;
    for(int i=0;i<n;i++){
        int noOfDays;
        cin>>noOfDays;
        instruments.push_back(noOfDays);
    }
    vector<int> ans=guideToLearnMaxInstruments(instruments,k);
    cout<<ans.size()<<endl;

    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}
