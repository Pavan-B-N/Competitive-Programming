// https://codeforces.com/contest/1462/problem/A
// [type: div3]
// [problem: 1462/A]
// [tag: two pointer, implementation]

#include <iostream>
#include <vector>
using namespace std;

vector<int> getPolycarpSequence(vector<int> &arr){
    int i=0;
    int j=arr.size()-1;
    vector<int> ans(arr.size());
    int k=0;
    while(i<=j){
        ans[k++]=arr[i++];
        if(i<=j)
            ans[k++]=arr[j--];
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans=getPolycarpSequence(arr);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
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
