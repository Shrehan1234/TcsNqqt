#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

int countFrequency(vector<int> & arr) {

    vector <bool> visited(arr.size() , false) ;

    for (int i =0 ; i < arr.size() ;i ++) {
            if(visited[i] == true) {
                continue;
            }
            int count = 1 ;
            for (int j = 0 ; j < arr.size() ; j++) {
                if(arr[i] == arr[j]){
                count ++ ;
                visited[j] = true ;

            }
            
    }
    cout << arr[i] << " appears" << count << endl ;
             }

        }

int main () {
    vector <int> arr1  = {15, 5 , 10 , 5 , 10 , 2};
    countFrequency(arr1);
    return 0 ; 
}