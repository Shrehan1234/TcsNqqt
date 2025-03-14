#include <iostream>
using namespace std ;

int fibbonaci(int N) {
    long long a = 0 , b = 1 ,  c ;
    for(int i = 1 ; i <= N ; i++) {
        cout << a << " ";
        c = a + b;
        a = b ;
        b = c ;
    }
    cout << endl ;
}

int main(){
    int N ;
    cout << "Enter the number of terms: ";
    cin >> N;
    fibbonaci(N);
    return 0 ;
};