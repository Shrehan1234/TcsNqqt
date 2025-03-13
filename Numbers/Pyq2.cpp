#include <iostream>
#include <vector>

using namespace std;

int countPriorElements(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return 0; // Edge case: Empty array

    int count = 0; // Start from 0
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) { 
                count++; // Count valid (i, j) pairs
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n; // Read the number of elements

    vector<int> arr(n); // Create vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read exactly 'n' numbers
    }

    cout << countPriorElements(arr) << endl; // Print result

    return 0;
}
