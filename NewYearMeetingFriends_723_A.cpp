// https://codeforces.com/problemset/problem/723/A
// [type: div2]
// [problem: 723/A]
// [tag: math, implementation,sorting]

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// we can also take the input as x1,x2,x3 or vector = sc=O(3)
int findMinDistance(vector<int> &arr){
    // arr = [x1,x2,x3]
    int minCoordinate = INT_MAX;
    int maxCoordinate = INT_MIN;
    int middleCoordinate;

    for(int coordinate:arr){
        minCoordinate=min(minCoordinate,coordinate);
        maxCoordinate=max(maxCoordinate,coordinate);

        if(minCoordinate!=coordinate && maxCoordinate!=coordinate){
            middleCoordinate=coordinate;
        }
    }

    return (middleCoordinate - minCoordinate) + (maxCoordinate - middleCoordinate);
}

// best technique because log(3) is very very minute
int findMinDistanceUsingSorting(vector<int> &arr){
    // arr = [x1,x2,x3]
    
    sort(arr.begin(),arr.end());
    
    return (arr[1]-arr[0]) + (arr[2]-arr[1]);

    
}
int main(int argc, char const *argv[])
{
    vector<int> arr(3,0);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    cout<<findMinDistanceUsingSorting(arr)<<endl;
    return 0;
}
