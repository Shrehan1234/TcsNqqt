#include <iostream>
using namespace std ;

int removeDuplicate(int arr[], int n){
    if( n == 0 ){
        return  0 ;
    }
    int index = 0 ; 
    for(int i =0 ; i<n ; i++){
        if(arr[i] != arr[index]){
            index ++;
            arr[index] = arr[i];
        }
    }
    return index + 1 ;
}

int main ( ) {
    int arr[] = { 1, 2 , 2 , 3, 4, 5 , 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = removeDuplicate(arr,n);
    for(int i =0 ; i < newSize; i++) {
        cout << arr[i] << " ";
    }
        return 0 ;
}

