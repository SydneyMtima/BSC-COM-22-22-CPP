#include <iostream>
using namespace std;

int main(){
    int x = 3;
    //the value of x is increased before the value of x is assigned to y
    // hence the vlue assigned to y is the value of x after being increased
    int y = x++;

    cout << "x: "<<x<< endl; //x will be 4
    cout << "y: "<<y<< endl; //y will be 3

    return 0;

}