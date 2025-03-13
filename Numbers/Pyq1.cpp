#include <iostream> 
#include <string>
using namespace std ;

int main( ){
    string s ;
    cin >> s ;
    int count_star =0 ; 
    int count_hash = 0 ;
        for(char c : s){
                if(c == '*'){
                    count_star ++;
                }
            else if(c == '#'){
                count_hash ++ ;
            }
        }
        cout << (count_star - count_hash ) << endl;
        return 0 ;
}
