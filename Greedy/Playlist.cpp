// https://codeforces.com/problemset/gymProblem/102961/M

#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int longestSquenceOfUniqueSongs(vector<int> &arr)
{
    unordered_map<int, int> freqMap; // ele->freq
    int left = 0;
    int maxLen = 0;

    // O(2n)
    for (int right = 0; right < arr.size(); right++)
    {
        while (freqMap.find(arr[right]) != freqMap.end())
        {
            freqMap[arr[left]]--;
            if (freqMap[arr[left]] == 0)
            {
                freqMap.erase(arr[left]);
            }
            left++;
        }
        freqMap[arr[right]]++;

        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestSquenceOfUniqueSongs(arr) << endl;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
