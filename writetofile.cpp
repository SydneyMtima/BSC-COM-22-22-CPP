#include <iostream>
#include <fstream>

usind namespace std;

int main(){
    ofstream Myfile("example.txt");

    if (myfile.is_open()){
        myfile<<"this is a line \n";
        myfile<<"This ia another line.\n";
        myfile.close();
    }
    else{
        cout << "Unable to open file";
    }
    return 0;
}