#include <iostream> 
using namespace std; 

int findLcm (int a ,  int b) {
    int maxNum = max(a , b);
    while(true){
        if(maxNum % a == 0 && maxNum % b == 0){
            return maxNum ;
        }
        maxNum ++;
    }
}

int main() {
    int num1 , num 2 ;
    cin >> num1 >> num2 ;
    int lcm = findLcm(num1 , num2);
    cout << "LCm of " << num1 << "and " << num2 << "is" << lcm << endl;
    return 0 ;
}