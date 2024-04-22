#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int daysUnitExpiration = rand() % 12;
  
    switch(daysUnitExpiration){
    case 10:
        cout << "Your subscription will expire soon. Renew now!";
        break;

    case 5: 
        cout << "Your subscription expires in " << daysUnitExpiration << endl;
        cout << "Renew now and save 10%";
        break;

    case 1:
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%";
        break;

    case 0:
        cout << "Your subscription has expired";
        break;

    default:
        cout << "You have an active subscription";
        break;
}
    

    return 0;
}