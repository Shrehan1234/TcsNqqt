#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std ;

bool CheckPrime(int n) {
   if(n < 2) return false ;
   for(int i = 2 ; i <= sqrt(n) ; i++){
    if(n % i == 0 ){
        return false ;
    }
   }
   return true ;
}
                            
int main() {
    vector<int> arr ;
    string input ;
    getline(cin , input);
    stringstream ss (input);
    int num ; 
    while(ss >> num){
        arr.push_back(num);
    }
   for(int ele: arr){
    if(CheckPrime(ele)){
        cout  << "true " << endl ;
    }
    else {
        cout << "False " <<endl;
    }
   }
   cout << endl ;
    return 0 ;
}