#include <iostream>
#include <climits>

using namespace  std ;

int MaxSubarray(int arr[] , int n ) {
    int maxSum = INT_MIN ;
    int currSum = 0 ;

    for(int i= 0 ; i < n ; i++){S
        currSum = currSum + arr[i];
        maxSum = max(currSum , maxSum);

        if(currSum < 0 ){
            currSum = 0 ;
        }
    }
    return maxSum ;

}

int main() {
    int n ;
    cin >> n ; 
    int arr[n];
    for(int i =0 ;  i < n ; i++) {
        cin >> arr[i] ;
    }
    int ans = MaxSubarray(arr , n) ;
    cout << ans << endl ;
    return 0 ;
}