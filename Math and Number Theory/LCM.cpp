// https://www.geeksforgeeks.org/problems/lcm-of-two-numbers/1

// Lowest Common Multiple
class Solution
{
public:
    int lcm(int a, int b)
    {
        // a * b = gcd(a,b) * lcm(a,b)
        // lcm(a,b)  = (a*b)/gcd(a,b)
        //   1 ≤ a, b ≤ 10^4
        return (a * b) / gcd(a, b);
    }

    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};