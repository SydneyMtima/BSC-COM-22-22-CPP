#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //creating and open atext file
    ofstream Myfile ("example.text");

    //close the file
    Myfile.close();
    
    return 0;
}