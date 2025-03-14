#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int increasingDecreasing(vector <int> & arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
    
    for(int i = 0 ; i< n/2 ; i++) {
        cout << arr[i] << " " ;
    }

    for (int i = n-1 ; i<n/2 ; i--) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int main() {
    vector<int> arr = {5, 3, 8, 1, 6, 7, 2, 4};
    increasingDecreasing(arr);
    return 0;
}