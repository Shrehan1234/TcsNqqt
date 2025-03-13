#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

int main(){

    int n ;
    cin >> n ;
    char arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    char ans ;
    for(int i = 0 ; i < n ; i++){
        ans = ans ^ arr[i];
    }
    if(ans == 0){
        cout << "All are even" << endl ;
    }
    else {
    cout << ans << endl ;
    }
    return 0 ;
}
