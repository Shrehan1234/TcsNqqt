#include <iostream> 
#include <bits/stdc++.h>
#include <cmath>
using namespace std ;

void findRoots(int a , int b , int c){
    int D = b*b - 4 * a * c ;
    if(a == 0 ) {
        cout << " Not a quadratic equation " << endl ;
    }

    if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2.0 * a);
        double root2 = (-b - sqrt(D)) / (2.0 * a);
        cout << "Roots are real and diff : ( " << root1 << " , " << root2 << " ) " << endl ; 
    }

    else if(D == 0){
        double root = -b / (2.0 * a);
        cout << "Roots are real and equal : ( " << root << " , " << root << " ) " << endl ; 
    }
    else {
        double realPart = - b / (2.0 * a) ;
        double imaginaryPart = sqrt(-D) /(2.0 * a);
        cout << "Roots  are complex : ( " << realPart << "+ i" << imaginaryPart << " , " << realPart << " -i " << imaginaryPart << " ) " << endl ;
    }
}
int main(){
    int a , b , c ;
    cin >> a >> b >> c ;
    findRoots(a,b,c);
    return 0 ;
}