#include <iostream>
#include <bits/stdc++.h>

using namespace std ;

// int main() {
//     vector<int> arr ;
//     string input ;
//     getline(cin , input);
//     stringstream ss (input);
//     int num ;
//     // char c ; {comma sperated input ke liye}
//     while( ss >> num ){
//         arr.push_back(num);
//         // ss >> c ;  {comma sperated input ke liye}
//     }
//     cout << "Output" << "";
//     for(auto ele: arr){
//         cout << ele <<" ";
//     }
// }


int main(){
    vector<int> arr ;
    string input ;
    getline(cin , input);
    stringstream ss (input);
    int num ; 
    char c ;
    while(ss >> num){
        arr.push_back(num);
        ss >> c ;
    }
    for(int ele: arr){
        cout << ele << endl ;
    }
}