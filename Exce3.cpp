#include <iostream>
# include <string>

using namespace std;

int main(){
    string element [8] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for(int i=0; i<8; i++){
        if(element[i].at(0) =='B' ){
            cout << element[i] + "  ";
        }
    }

    return 0;
}