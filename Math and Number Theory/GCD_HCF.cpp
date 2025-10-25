// https://www.naukri.com/code360/problems/hcf-and-lcm_840448
#include <iostream>
using namespace std;

int calcGCDRecursive(int a, int b)
{
    if (b == 0)
        return a;
    return calcGCDRecursive(b, a % b);
}

int calcGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
}

int main(int argc, char const *argv[])
{
    int a=45;
    int b=60;
    cout<<calcGCD(a,b)<<endl;
    return 0;
}
