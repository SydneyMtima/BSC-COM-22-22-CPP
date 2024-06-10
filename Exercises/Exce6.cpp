#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void Reverse(string data);

int main(){
    int vowels;
    int words = 1;

    ifstream inputFile("advanced.txt");

    string filedata;

    while(getline(inputFile,filedata))
    
// counting the number of vowels
    for(int i = 0; i<filedata.length(); i++){
        if(filedata.at(i)=='a' || filedata.at(i)=='e' || filedata.at(i)=='i' || filedata.at(i)=='o' || filedata.at(i)=='u' ||
        filedata.at(i)=='A' || filedata.at(i)=='E' || filedata.at(i)=='I' || filedata.at(i)=='O' || filedata.at(i)=='U'){
            vowels++;
        }
    }
    cout <<"Number of vowels is "<<vowels << endl;

// counting the number of words
    int i=0;
    while(i < filedata.length()){
        if(filedata[i] == ' '){
           words++; 
        }
        i++;    
    }
    cout << "Number of words is "<<words<<endl;

//Reversing the filedata
    Reverse(filedata);

    //converting second letter of each word
    string data;
    stringstream ss(filedata);
    while(ss >> data){
        if(dat.size() >= 2){
            dat[1] = toupper(data[1]);
     }
     cout << data +" ";
 }
       

    return 0;
}

void Reverse(string data){
    reverse(data.begin(),data.end());
    cout << "Reversed filedata: " << data<<endl;
}


