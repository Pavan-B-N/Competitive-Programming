// https://codeforces.com/problemset/problem/1956/A
// [type: div2]
// [problem: 1956/A]
// [tag:  binary_search, queries, games, greedy]
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// uses linear search algo
int countPossibleWinnersLS(vector<int> &arr, int totalPlayers)
{
    while (totalPlayers != 0)
    {
        int countPeoplesKicked = 0;
        for (int playerToBeKicked : arr)
        {
            // count the players to be kicked who are part of the game
            if (playerToBeKicked <= totalPlayers)
            {
                countPeoplesKicked++;
            }
        }
        if (countPeoplesKicked == 0)
            break;
        totalPlayers -= countPeoplesKicked;
    }
    return totalPlayers;
}

//  initially n players are lined up in a row = so this line says array is sorted
// using binary search
int countPossibleWinnersBS(vector<int> &arr, int totalPlayers)
{
    // since the array is sorted so we can find how many players can be kicked if there n totalPlayers
    // 1≤k, so we can safely access 0th element
    while (totalPlayers>=arr[0])
    {
        int ub = upper_bound(arr.begin(), arr.end(), totalPlayers) - arr.begin();
        totalPlayers -= ub;
    }
    return totalPlayers;
}

// greedy
// 3 5
// if we observe always all the players are kicked out unless only <3 peoples are in the game
int countPossibleWinners(vector<int> &arr, int totalPlayers)
{
    return min(arr[0]-1,totalPlayers);
}


void solve(vector<int> &arr, int k, int queries)
{
    while (queries--)
    {
        int totalPlayers; // or query or n
        cin >> totalPlayers;
        cout << countPossibleWinners(arr, totalPlayers) << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    // k=players to be kicked
    // q= queries, who give n at each time
    while (t--)
    {
        int k, queries;
        cin >> k >> queries;

        // input array or players to be kicked
        vector<int> arr(k);
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        solve(arr, k, queries);
    }
    return 0;
}
