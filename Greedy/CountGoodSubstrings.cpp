// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        if (s.size() < 3)
            return 0;
        unordered_map<char, int> freqMap;
        int count = 0;
        int left = 0;

        for (int right = 0; right < 3; right++)
        {
            freqMap[s[right]]++;
        }

        if (freqMap.size() == 3)
            count++; // check first window

        for (int right = 3; right < s.size(); right++)
        {
            freqMap[s[left]]--;
            if (freqMap[s[left]] == 0)
            {
                freqMap.erase(s[left]);
            }
            left++;

            freqMap[s[right]]++;

            if (freqMap.size() == 3)
            {
                count++;
            }
        }

        return count;
    }
};
