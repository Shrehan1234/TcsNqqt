#include <iostream> 
using namespace std ;

int maxSubarray(int arr[], int n){
    int CurrSum = 0 ;
    int maxSum = INT_MIN ;
    for(int st = 0 ; st < n ; st++){
        for(int end = st ; end < n ; end++ ){
            CurrSum = CurrSum + arr[end];
            maxSum = max(CurrSum , maxSum) ;
        }
    }
    return maxSum ;
    
}

int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i =0 ; i <n ; i++){
        cin >> arr[i];
    }

    int ans = maxSubarray(arr, n);
    cout << "Maximum Subarray is " << ans << endl ;
}