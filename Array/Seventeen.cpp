#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void findRepeatingElement(vector<int> & arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
    for(int i = 1 ; i< n ; i ++){
            if(arr[i] == arr[i-1]){
                if(i == 1 || arr[i] != arr[i-2]) {
                    // print only once
                    cout << arr[i] << " ";
                }
            }
    }
    cout << endl ;
}


int main() {
    vector<int> arr = { 1 , 1 ,  1, 2 , 4,, 3, 5 , 2};
    findRepeatingElement(arr);
    return 0 ;
}