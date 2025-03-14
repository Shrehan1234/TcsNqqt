#include <bits/stdc++.h>
#include <iostream>
#include<cctype>
#include <vector>

using namespace std ;

bool Palindrome(vector<char> &arr){
    int left = 0 ; 
    int right = arr.size() -1 ;
    while(left < right){
        if(arr[left] != arr[right]){
            return false ;
        }
        left ++ ;
        right --;
    }
    return true ;
}

int main() {
    vector<char> &arr ;
    string input ;
    while(cin >> input){
        for(char c : input) {
            if(isdigit(c) || isalpha(c)){
                arr.push_back(c);d
            }
        }
    }
    if(Palindrome(arr)){
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl ;
    }
    return 0 ;
}