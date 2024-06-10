#include "Person.h"
#include <string>

using namespace std;

Person::Person(){

}
Person::Person(string mfName, int newWeight){
    mWeight = newWeight;
    mFirstName = mfName;
}
Person::~Person(){

}
float Person::operator+ (const Person& otherperson){
    Person person;

    return this-> mWeight + otherperson.mWeight;

}