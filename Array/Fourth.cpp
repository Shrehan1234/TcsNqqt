#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int reversearray(vector<int>&arr) {
    int start = 0 ; 
    int end = arr.size() - 1 ; 
    while(start < end ) {
        swap(arr[start] , arr[end]);
        start++ ;
        end -- ;
    }
}

int main() {
    vector<int> arr1 = {1 , 2 ,3 ,5 ,6 };
    int size = 5 ;
    cout << "The reversed Array is  :" << reversearray(arr1) ;
    return 0; 
}