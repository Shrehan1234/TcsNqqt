#include <iostream>
using namespace std ;

int findEquilibrium(int arr[] , int n){
    int leftSum = 0 ;
    int totalSum = 0 ;
    for(int i = 0 ; i<n ; i++){
        totalSum = totalSum + arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(leftSum == totalSum - leftSum - arr[i]){
            return i ;
        }
        leftSum = leftSum + arr[i];
    }
    return -1 ;
}

int main(){
    int n ;
    cin >> n ; 
    int arr[n];
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }
    int ans = findEquilibrium(arr ,n );
    cout << "Therefore the index is : " << ans << endl ;
    return  0 ;
}