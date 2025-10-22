// https://codeforces.com/problemset/problem/282/A

// [type: div2]
// [problem: 282A]
// [tag: implementation]

#include <iostream>
#include <string>
using namespace std;

void operation(int &valueOfX)
{
    string statement;
    getline(cin >> ws, statement); // ws used to skip reading the newline or whitespace

    if (statement[1] == '+')// or statement=="X++" || statement=="++X"
    {
        valueOfX++;
    }
    else
    {
        valueOfX--;
    }
}

int main()
{
    int valueOfX = 0;
    int t; // number of statements/test cases
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        operation(valueOfX);// pass by reference
    }

    cout << valueOfX << endl;

    return 0;
}
