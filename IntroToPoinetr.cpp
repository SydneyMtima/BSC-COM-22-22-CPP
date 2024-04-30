#include <iostream>
using namespace std;

int main(){
    //declare a pointer and initialize it
    // so tht it doesnt store a random address
    int*  pPointer = nullptr;

    int integerVar = 5;

    //assign pointer to address of object
    pPointer = &integerVar;

    //output the value of integerVar
    cout << "integerVar: " << integerVar <<endl;

    //output the address of integerVar
    cout << "integerVar: " << &integerVar <<endl;

    //output the address assigned to pointer 
    cout << "integerVar: " << pPointer <<endl;

    //output the address of a pointer 
    cout << "integerVar: " << &pPointer <<endl;

    return 0;
}