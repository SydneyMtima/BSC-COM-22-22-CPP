#include <iostream>
#include <string>

using namespace std;

int main(){

    
    //dynamically creating memory
    int* pIntegerVar = new int;
    string* pStr = new string;

    // getting the integer from user and assign it pointer
    cout << "Enter the integer value: "<< endl;
    cin >> *pIntegerVar;
    

    //getting the string from user and assign it to pointer
    cout << "Enter the string: "<< endl;
    cin.ignore();
    getline(cin, *pStr);
    
    //outputing onto the consle the values of the pointers
    cout << "The integer is "<<*pIntegerVar << endl;
    cout << "The string is "<<*pStr << endl;

    // deleting the dynamic memory
    delete pIntegerVar;
    delete pStr;
    

    return 0;
}
