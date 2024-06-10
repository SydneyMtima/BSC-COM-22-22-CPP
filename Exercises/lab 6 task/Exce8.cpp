#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    //variable declaration
   int column ;
   int row;

    //testing if column is less than 3
  /* cout << "Enter column number: " << endl;
   cin >> column;
  while(column >3){
        cout << "Enter column number: " << endl;
        cin >> column;
    }*/

    //Testing if row is less than 3
    cout << "Enter column number: " << endl;
    cin >> column;

    cout << "Enter row number: " << endl;
    cin >> row;
    while(row >3 && column > 3){
        cout << "Enter column number: " << endl;
        cin >> column;

        cout << "Enter row number: " << endl;
        cin >> row;
    }
    
    //declare memory block of size M
    double** dArray = new double*[row];

    for(int i = 0; i < row; i++){
       dArray[i] = new double[column];
    }

    //Asgning the values 
    for(int i = 0; i < row; i++){
        for(int j = 0; i < column; j++){
          dArray[i][j] = i + j;
        }
        
    }

    //printing the values created
    cout << "the array is" <<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
           
            cout << dArray[i][j] << " ";
        }
        cout << endl;
    }

    //deleting the array created
     for (int i = 0; i < row; i++){
        delete[] dArray[i];
     }
    delete[] dArray;

    return 0;
}