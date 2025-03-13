#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std ;

bool CheckPrime(int n) {
    int count = 0 ; 
    for(int i = 0 ; i < sqrt(n); i++){
        if(n % i == 0){
            count = count + 1 ;
        if(n/i != i){
            count = count + 1 ;
        }
        }
    }
    if(count == 2) {
        return true;
    }
    else {
        return false;
    }
}
                            
int main() {
    vector<int> arr; 
    int n ; 
    while(cin >> n ){
        arr.push_back(n);
    }
    for(int num:arr){
        if(CheckPrime(num)){

            cout << num << "prime" << endl ;

        }

        else {

            cout << num << "Not prime" << endl ;

        }

    }

    return 0 ;
    
}