#include <iostream>
#include<bits/stdc++.h>
using namespace std ;


int smallestElement(vector<int> & arr){
        sort(arr.begin() , arr.end());
        return arr[0];
}
int main (){
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8 ,  10 , 5 , 7 , 9 };

    cout << "The Smallest element in the array " << smallestElement(arr1) << endl ;
    return 0 ; 
}