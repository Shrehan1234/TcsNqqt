#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>  
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}
bool checkTwoPrime(int N) {
    for (int i = 2; i <= N / 2; i++) {
        if (isPrime(i) && isPrime(N - i)) {
            cout << "True: " << N << " can be expressed as " << i << " + " << (N - i) << endl;
            return true; // Found a valid pair, return true
        }
    }
    cout << "False: " << N << " cannot be expressed as the sum of two prime numbers." << endl;
    return false;
}

int main() {
    vector<int> numbers;
    string input;
    
    // Taking space-separated input in one line
    getline(cin, input);
    stringstream ss(input);
    int num;

    while (ss >> num) {
        numbers.push_back(num);
    }

    // Checking each number in input
    for (int N : numbers) {
        checkTwoPrime(N);
    }

    return 0;
}
