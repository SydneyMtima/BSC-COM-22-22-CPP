#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1 = "Hellow";
    string str2 = "World";
    string str3;
    int len;

    //copy str1 int str3
    str3 = str1;
    cout << "str3: "<< str3<<endl;

    //concatenates str1 and str2
     str3 = str1 + str2;
    cout << "str3: "<< str3<<endl;

    //total length of str3 after concatenation
    len = str3.size();
    cout << "Str3.size(): "<< len << endl;

    return 0;
}
