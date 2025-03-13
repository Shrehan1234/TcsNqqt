#include <iostream>
using namespace std ;

int PriorElement(int arr[], int n){
    int count = 1 ;
    int maxi = arr[i];
    for(int i =1 ; i<n ;i++){
        if(maxi < arr[i]){
            count ++;
            maxi = arr[i];
        }
    }
    return count;
}

int main( ) {
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        }
        cout << PriorElement(arr,n) << endl ;
        return 0 ;
}