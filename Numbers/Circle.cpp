#include <iostream> 
#include <cmath>
using namespace std ;

void CircleArea(int r){
    double area = 3.14 * r * r ;
    cout << "Area of circle is : " << area << endl ;
}
int main( ){
    int r ;
    cin >> r ;
    if(r < 0){
        cout << "Radius cannot be negative" << endl ;
    }
    else {
        CircleArea(r);
    }
    return 0 ;
}