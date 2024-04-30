#include <iostream>
using namespace std;

int main(){

    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //assign pointer with the address of first value
    pPointer = &firstValue;
    *pPointer = 10; //indirection

    //assign pointer with the address of second value
    pPointer = &secondValue;
    *pPointer = 20; //indirection

    cout << "firstvalue is "<<firstValue<<endl;
    cout << "secondvalue is "<< secondValue<<endl;

    return 0;

}