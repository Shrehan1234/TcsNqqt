#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void check(int n){
    if(n>0){
        cout << "Positive" << endl ;
    }
    else {
        cout << "Negative" << endl ;
    }
}



int main() {
    vector<int> arr ;
    int n ;
    while(cin >> n){
        arr.push_back(n);
    }
    for(int num: arr){
       check(num);
    }
    return 0 ;
}