// https://codeforces.com/gym/102267/problem/B
/*
 prime number is a natural number greater than 1 and has exactly 2 divisors which are 1 and the number itself.

You are given a prime number n
, find any 2 prime numbers a
 and b
 such that a+b=n
 or state that no such pair of primes exists.

Input
The input contains a single prime number n
(2≤n≤107
).

Output
If there doesn't exist any 2 primes such that their summation is equal to n
 then print -1, otherwise print the 2 primes on a single line separated by a space.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// since the given number is prime , so n=a+b
// a=2 and b=n-2, so if b is prime 2,n-2 is answer
// sqrt(n)
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// best solution
void solve(int n)
{
    if (isPrime(n - 2))
    {
        cout << 2 << " " << n - 2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    solve(n);
    return 0;
}
