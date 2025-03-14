#include <iostream> 
#include <bits/stdc++.h>
using namespace std ;

int maxSubarray(vector<int> &arr) {
    int currSum = 0 ;
    int maxSum = INT_MIN;
    for(int i =0 ; i<arr.size(); i++){
        currSum = currSum + arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0) {
            currSum = 0 ;
        }
    }
    return maxSum ;
}

int main() {

    vector <int> arr ;
    string input ; 
    getline(cin , input);
    stringstream ss(input);
    int num ;
    while(ss >> num ){
        arr.push_back(num);
    }
    int ans = maxSubarray(arr);
    cout << ans << endl ;
    return 0 ;
}