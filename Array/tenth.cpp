#include <iostream> 
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std ;

void getMedian(vector<int> & arr ){
    int n = arr.size();
    sort(arr.begin() , arr.end());
    
    if(n%2 == 0) {
        int index1 = n /2 ; 
        int index2 = n / 2 - 1 ;
        double median = (arr[index1] + arr[index2]) / 2.0; // Ensure floating point division
        cout << median << endl;
    }
    else {
        cout << arr[n/2] ;
        
    }
}

int main() {
    vector<int> arr = {7, 2, 1, 6, 5, 3, 4, 8}; // Example input
    getMedian(arr);
    return 0;
}

