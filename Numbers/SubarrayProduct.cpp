#include <iostream> 
using namespace std ;

int maxsubarrayProduct(int arr[] , int n){
    int maxProduct = INT_MIN ;
    int currProduct = 1 ; 

    for(int st = 0 ; st < n ;st++){
        for(int end = st ;end < n ; end++){
            currProduct = currProduct * arr[end] ;
            maxProduct = max(currProduct , maxProduct);
        }
    }
    return maxProduct ;
}

int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[n] ;
    }
    int ans = maxsubarrayProduct(arr , n );
    cout << "Mawimum subarray product is" << ans << endl ;
    return 0 ;
}