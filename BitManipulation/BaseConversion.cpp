// https://www.geeksforgeeks.org/problems/base-conversion0924/1
// [favorite]

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<string> convert(int a, int b, int c, string d)
    {
        string aInBase2 = convertDecimalToBase(a, 2);
        string bInDecimal = convertBaseToDecimal(to_string(b), 2);
        string cInBase16 = convertDecimalToBase(c, 16);
        string dInDecimal = convertBaseToDecimal(d, 16);

        return {aInBase2, bInDecimal, cInBase16, dInDecimal};
    }

    string convertBaseToDecimal(string num, int base)
    {
        int result = 0;
        int basePower = 1;

        for (int i = num.size() - 1; i >= 0; i--)
        {
            int digit = isdigit(num[i]) ? (num[i] - '0') : (10 + num[i] - 'A');
            result += digit * basePower;
            basePower *= base;
        }

        return to_string(result);
    }

    string convertDecimalToBase(int num, int base)
    {
        if (num == 0)
            return "0";

        string result;
        while (num > 0)
        {
            int remainder = num % base;
            char ch = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
            result.push_back(ch);
            num /= base;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int a, b, c;
    string d;
    cin >> a >> b >> c >> d;

    vector<string> ans = s.convert(a, b, c, d);
    for (string s : ans)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
