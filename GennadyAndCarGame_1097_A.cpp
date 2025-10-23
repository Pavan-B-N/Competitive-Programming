// https://codeforces.com/problemset/problem/1097/A
// [type: div2]
// [problem: 1097/A]
// [tag: implementation,constructive]

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool canPlay(string &cardOnTable,vector<string> &cardsInHand){
    // [rank,suite]
    for(string card:cardsInHand){
        char rank=card[0];
        char suite=card[1];
        if(cardOnTable[0]==rank || cardOnTable[1]==suite){
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    string cardOnTable;
    vector<string> cardsInHand(5);
    cin>>cardOnTable;

    for(int i=0;i<5;i++){
        cin>>cardsInHand[i];
    }

    if(canPlay(cardOnTable,cardsInHand)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
