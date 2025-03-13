#include <iostream> 
using namespace std ;

int main(){
    int left ; 

    int right ; 

    cin >> left ; 

    cin >> right ;

    int sum =0 ;

    for(int i = left ; left <= right ; i++){

        sum = sum + i ;

    }
    
    cout << "The sum of numbers in the given  range is " << sum << endl ;
}