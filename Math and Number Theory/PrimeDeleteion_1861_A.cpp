// https://codeforces.com/problemset/problem/1861/A
// [type: div2]
// [problem: 1861/A]
// [tag: math, number theory, constructive]

#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n)
{
    if (n <= 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int getSequence(string &s)
{

    // you cannot perform this operation if the sequence consists of only two digits.
    // they never said given number is prime
    if (s.size() <= 2)
    {
        if (isPrime(stoi(s)))
            return stoi(s);

        else
            return -1;
    }

    // Note that you cannot reorder the digits in the sequence.
    // 13 or 31
    // at most loop can go O(8) times
    for (char digit : s)
    {
        if (digit == '1')
            return 13;

        if (digit == '3')
            return 31;
    }

    // theoretically unreachable in problem constraints
    return -1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        cout << getSequence(s) << endl;
    }
    return 0;
}
