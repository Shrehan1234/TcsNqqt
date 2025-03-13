#include <iostream>
#include <bits/stdc++.h>

using namespace std ;

void insertatbeginning(vector <int> &arr , int value) {
    int n = arr.size();
    arr.push_back(0);
    for(int i = n-1 ; i >= 0 ; i-- ){
        arr[i+1] = arr[i];
    }
    arr[0] = value ;
}

int main() {
    int n ;
    cin >> n; 
    int value ;
    cin >> value ;

    vector<int> arr(n) ;

    for(int i =0 ; i<n; i++) {
        cin >> arr[i] << " " ;
    }
    insertatbeginning(arr,value);

     for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
