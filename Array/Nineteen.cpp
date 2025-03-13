#include <bits/stdc++.h>
using namespace std ;

int findSymmetric(vector<vector<int>> &arr){

    int n = arr.size();

    for(int i =0 ; i<n; i ++) {
        for(int j =i + 1 ; j< n; j++){
            if(arr[j][0] == arr[j][1] && arr[j][1] == arr[i][0]){
          
            }
        }
    }
}

int main (){
    int n ; 
    cin >> n ; 
    vector<vector<int>> arr(n, vector<int>(2));

    cout << "Enter the pairs" << endl ;
    for(int i = 0 ; i<n ; i++ ){
        cin >> arr[i][0] >> arr[i][1];
    }
    cout << "Symmetric Paris: " ;
    findSymmetric(arr);
    return 0 ;
}