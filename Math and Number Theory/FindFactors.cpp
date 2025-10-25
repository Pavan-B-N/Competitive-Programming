#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
public:
    static void findFactors(int n)
    {
        vector<int> ans;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if(i != (n/i)){
                    ans.push_back(n/i);
                }
            }
        }

        sort(ans.begin(),ans.end());

        for(int ele:ans){
            cout<<ele<<" ";
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution::findFactors(12);
    return 0;
}
