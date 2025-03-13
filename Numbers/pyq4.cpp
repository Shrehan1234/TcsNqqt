#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n , k , j , m ,  n  , p ; 
    cin >> n >> k >> j >> m >> n >> p ;
    int banana_eat  = m / k ;
    int banana_remaining = m % k ;

    int peanut_eat = p / j ;
    int peanut_remaining = p % j ;

    int left = n - (banana_eat + peanut_eat);

    if(banana_remaining != 0 || peanut_remaining!= 0){
        left = left - 1 ;
    
    }
    cout << left << endl ;
    return 0 ;
}