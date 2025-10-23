// https://codeforces.com/problemset/problem/263/A
// [type: div2]
// [problem: 263/A]
// [tag:  implementation]

#include <iostream>
#include <vector>
using namespace std;

// given 5x5 matrix
int findMinMovesToMakeMatrixBeautify(vector<vector<int>> &matrix)
{
    // middle position is (2,2)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                return abs(i - 2) + abs(j - 2);
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix(5, vector<int>(5, 0));

    // take input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << findMinMovesToMakeMatrixBeautify(matrix) << endl;

    return 0;
}
