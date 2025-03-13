#include <bits/stdc++.h>
#include <vector>
using namespace std ;

void InsertatPos(vector<int> arr , int val , int pos) {
        if(pos < 0 || pos > arr.size()) {
            cout << "Invalid position " << endl ;
            return ;
        }
        arr.insert(arr.begin() + pos , val);
}

int main(){
    int n;
    cin >> n ;

    vector<int> arr(n);
    for(int i=0 ; i < n; i++){
        cin >> arr[i];
    }
    int pos;
    int value ;
    cin >> pos ;
     cin >>  value ;

     InsertatPos(arr , val , pos);
     for(int i = 0; i< arr.size() ; i++){
        cout << arr[i] << " ";
     }
     return 0 ;
}