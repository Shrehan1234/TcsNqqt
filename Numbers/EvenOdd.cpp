#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    vector<int> arr ;
    int  n ;
    while(cin >> n ){
        arr.push_back(n);
    }
    for(int num: arr){
        if(num % 2 == 0){
            cout << num << "is even" << endl ;
        }
        else {
            cout << num << "is odd" << endl ;
        }

    }

    return 0 ;
    
}