#include <iostream> 
#include <cmath>
using namespace std ;

int Replacezero(int num){
    if (num == 0){
        return  1 ;
    }
    int ans = 0 ; 
    int tmp  =  1 ;
    
    while(num > 0) {
        int ld = num % 10 ;

        if(ld == 0){
            return 1 ;
        }
            ans = ld * tmp + ans ;
            num = num / 10 ;
            tmp =  tmp * 10 ;
    }
    return ans ;
}

int main( ){
    int n ; 
    cin >> n ;
    int result  = Replacezero(n);
    cout << "After replacing zeroes with ones" << n << "becomes" << result ;
}