#include <iostream>
#include <cmath>
using namespace std ;

int main() {  
    int n , temp , digit , sum = 0 , digits = 0 ;
    cin >> n ;
    temp = n ; 
    //step 1 : count the number of digits
    int num = n ; 
    while(num > 0){
        dgitis++;
        num =num / 10 ;
    }

    //step 2 : armstrong sum 
    while (n > 0){
        digit = n % 10 ;
        sum = sum + pow(digit , digits);
        n = n / 10;
    }
    //step3 check 
    if(temp == sum){
        cout << "armstrong";
    }
    else {
        cout << "Not armstrong";
    }
    return 0 ;
}