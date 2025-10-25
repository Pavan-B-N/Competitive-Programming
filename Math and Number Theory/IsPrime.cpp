// https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution
{
public:
    bool isPrime(int n)
    {
        // 0 and 1 are not prime 
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};
