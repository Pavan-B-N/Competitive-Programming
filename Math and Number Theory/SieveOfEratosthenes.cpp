// https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> sieve(int n)
    {
        vector<bool> sieve(n + 1, true);
        sieve[0]=false;
        sieve[1]=false;

        for (int i = 2; i * i <= n; i++)
        {
            if (sieve[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    sieve[j] = false;
                }
            }
        }

        vector<int> ans;
        for (int i = 2; i <= n; i++)
        {
            if (sieve[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};