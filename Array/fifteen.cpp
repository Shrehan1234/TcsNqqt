#include <bits/stdc++.h>
#include <iostream>

using namespace std ;

void insertatend(vector<int> &arr , int value) {
    arr.push_back(value) ;
}

int main( ){
    int n ;
    cin >> n ; 

    vector <int> arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i;]
    }
    int value ;
    cin >> value ;

    insertatend(arr , value);
    for(int i = 0 ; i< arr.size() ; i++) {
        cout << arr[i] << " ";
    }
    return 0 ;
}