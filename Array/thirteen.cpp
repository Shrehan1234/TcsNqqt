#include <iostream> 
#include <vector>
#include <bits/stdc++.h>
using namespace std ;

int removeduplicate(vector<int> & arr) {
    int n = arr.size();
        sort(arr.begin() , arr.end());

        if(n == 0){
            return 0 ; 
        }
            int index = 0 ;
        for(int i=1; i<n ; i++) {
            if(arr[i] != arr[index]) {
                index ++ ;
                arr[index] = arr[i];
            }
        }
        return index + 1 ;
}

int main() {
    vector<int> arr1 = { 1 , 4 , 3 , 4 , 10 ,6 , 6 , 10 };

    int newSize = removeduplicate(arr1);
    for(int i =0 ; i<newSize; i++){
        cout << arr1[i] << " ";
    }
    return 0 ;
}