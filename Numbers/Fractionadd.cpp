#include <iostream> 
#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;

int FractionSum(int num1 , int den1 , int num2 , int den2) {
    int numerator =  (num1 * den2) + (num2 * den1);
    int denominator = (den1 * den2);

    int gcd = __gcd(numerator , denominator);
    numerator = numerator / gcd ;
    denominator = denominator / gcd ;

    cout << "Result :" << numerator << "/" << denominator << endl ;
}

int main() {
    int num1 ,  den1 ,  num2 ,  den2 ;
    cin >> num1 >> den1 >> num2 >> den2 ;
    FractionSum(num1 , den1 , num2, den2);
    return 0 ;
}

