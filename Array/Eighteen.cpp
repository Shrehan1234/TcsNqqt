#include <bits/stdc++.h>
using namespace std ;

void  Findingnonrepeting(vector<int> & arr  ) {
    int n = arr.size();
    
    vector <int> result;

        unordered_map<int ,int > freq ;

        for(int i = 0 ; i< n ; i++){

            int num = arr[i];

            freq[num] ++ ;

        }
        for(int i =0 ; i< n ; i++){
            int num  = arr[i];
            if(freq[num] == 1) {
                result.push_back(num);
            }
        }
}   

int main () {
    vector<int> arr = {4,5,6,7,8,4,6,8};

    vector <int> nonRepeting = Findingnonrepeting(arr);
    for (int i = 0 ; i < nonRepeting.size(); i++){
        cout << nonRepeting[i] << " ";
    }

    return 0 ;

}