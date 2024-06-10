# include <iostream>
#include <stdlib.h>



using namespace std;

double Square();
double Triangle();
double Rectangle();
int Select(int selection);
int choose();
void Area(int selection);
void Repeat(int selection);

int main(){
    
    while(true){
        Area(Select(choose()));
    }
    

    return 0;
}

double Rectangle(){
    double length;
    double width;
    double area;
    
    cout <<"Enter the length: ";
    cin>>length;

    cout <<"Enter the width: ";
    cin>>width;

    area = length * width;
   cout << "Area of rectangle is "<< area<<endl;
    return 0;
}

double Triangle(){
    double base;
    double height;
    double area;

    cout <<"Enter the base: ";
    cin >>base;

    cout <<"Enter the height: ";
    cin >>height;

    area = 0.5 * base * height;
    cout << "Area of triangle is "<< area <<endl;

    return 0;
}

double Square(){
    double length;
    double area;

    cout << "Enter the length: ";
    cin >> length;

    area = length * length;
    cout <<"Area of the square is "<< area <<endl;

    return 0;
}

int Select(int choice){
     while(choice < 1 || choice >4)
    {
        cout << "Your input was: "<< choice <<" which is an invalid input"<<endl;
        cout <<"Please enter a valid input!!!";

        cout << "Please select the area of the shape to calculate."<<endl;
        cout << "1. Square\n 2. Rectangle \n 3. Triangle \n 4. Quit program" <<endl;

        cout << "Enter selection: ";
        cin >> choice;
 }
 return choice;
}

int choose(){
    int selection;
    cout << "Please select the area of the shape to calculate."<<endl;
    cout << "1. Square\n 2. Rectangle \n 3. Triangle \n 4. Quit program" <<endl;

    cout << "Enter selection: ";
    cin>>selection;

    return selection;
}

void Area(int selection){
     if(selection == 1){
        Square();
        Repeat(Select(choose()));
    }else if(selection == 2){
        Rectangle();
       Repeat(Select(choose())) ;
    }else if(selection == 3){
        Triangle();
       Repeat(Select(choose())) ;
    }else if(selection == 4){
        exit(0);
    }

}

void Repeat(int selection){
     if(selection == 1){
        Square();
        Select(choose());
    }else if(selection == 2){
        Rectangle();
        Select(choose());
    }else if(selection == 3){
        Triangle();
        Select(choose());
    }else if(selection == 4){
        exit(0);
    }

}