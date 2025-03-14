#include <iostream>
#include <sstream>
#include <vector>
#include <climits>  // INT_MIN ke liye

using namespace std;

int MaxSubarray(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr;
    string input;
    getline(cin, input);  // Space-separated input lo
    stringstream ss(input);
    int num;
    while (ss >> num) {  // Numbers ko vector me store karo
        arr.push_back(num);
    }
    int ans = MaxSubarray(arr);  // Maximum Subarray Sum find karo
    cout << ans << endl;
    return 0;
}
