#include <iostream>
using namespace std ;

bool isPrime(int num){
    if(num < 2){
        return false ;
    }
    for(int i = 2 ; i <= sqrt(num); i++){
        if(num % i == 0)

        return false ;
    }

    return true ;

}

bool checkTwoPrime(int N){
    for(int i = 2; i < N/2 ; i++){
        if(isPrime(i) && isPrime(N - i)){
            cout << "True" << N << " can be expressed as " << i << "+" << (N-i) << endl ;
        }
    }
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    checkSumOfTwoPrimes(N);
    return 0;
}