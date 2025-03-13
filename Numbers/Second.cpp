#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std ;

bool isPalindrome(int num){
    int original = num ;
    int reversed = 0 ;
    while(num > 0){
        int lastdigit = num % 10 ;
        reversed = reversed * 10 + lastdigit ;
        num = num / 10 ;
    }
    return original == reversed ;
}

int main() {
    vector<int> arr;
    int num;
    while(cin >> num){
        arr.push_back(num);
    }
    if(arr.size() < 2) {
        cout << "Enter the start and end of the range " << endl ;
        return 0 ;
    }
    int start = arr[0] , end = arr[1];
    cout << "Palindrome number";
        for(int i=start ; i<= end; i++){
            if(isPalindrome(i)){
                cout << i << " ";
            }
        }
        cout << endl ;
        return 0 ;
}