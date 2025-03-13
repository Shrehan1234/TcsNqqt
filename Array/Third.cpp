#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int nums [] = { 5 , 15 , 25 , 22 , 1 , -15 , -24};
    int smallest = INT_MAX ;
    int largest = INT_MIN ;
    int n = 6 ;
    for(int i = 0 ; i<n ;i ++) {
        smallest = min(nums[i] , smallest);
        largest = max(nums[i] , largest);
    }
    cout << "smallest" << smallest << endl;
    cout << "smallest" << largest << endl;
    return 0 ;
}