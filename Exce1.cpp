#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    int daysUnitExpiration = rand() % 11 + 1;
    
    if(daysUnitExpiration == 10){
        cout << "Your subscription will expire soon. Renew now!";

    }else if(daysUnitExpiration == 5){
        cout << "Your subscription expires in " <<daysUnitExpiration << endl;
        cout << "Renew now and save 10%";

    }else if(daysUnitExpiration==1){
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%";

    }else if(daysUnitExpiration==0){
        cout << "Your subscription has expired";

    }else{
        cout << "You have an active subscription";
    }
   
    return 0;
}







