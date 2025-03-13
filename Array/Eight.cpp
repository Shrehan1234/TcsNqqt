#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std ; 

void rotateArray(vector<int> &arr) {
    int n = arr.size();
    if(n == 0) {
        return ;
    }

    int temp = arr[0];
    for(int i =0 ; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp ;
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6};
    rotateArray(arr1);
    
    for (int i = 0; i < (int)arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0 ;
}