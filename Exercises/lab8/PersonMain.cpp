#include "Person.h"
#include <iostream>

using namespace std;

int main(){
    
    Person Jane = Person("Jane",60);
    Person John = Person("John",75);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}