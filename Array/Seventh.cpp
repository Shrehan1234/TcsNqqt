#include <bits/stdc++.h>
using namespace std ;

void Sumelements(const vector <int> & arr) {
    int n = arr.size();
    int sum  = 0 ; 
    for(int i =0 ; i < n ; i++) {
        sum += arr[i];
}
cout << "The sum of the array is " << endl ;

    }

    int main ( ) {
        vector <int> arr1 = { 1 , 2 , 3 , 4 , 5};
        Sumelements(arr1);
        return 0 ;
    }