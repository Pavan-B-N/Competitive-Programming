// https://www.geeksforgeeks.org/problems/decimal-to-any-base-conversion2440/1
#include <string>
#include <algorithm>
using namespace std;

// User function Template for C++
class Solution {
  public:
    string getNumber(int base, int n) {
        string ans;
        while(n!=0){
            int rem=n%base;
            char bit=(rem<10) ? (rem+'0') : (rem-10+'A');
            ans.push_back(bit);
            n/=base;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};