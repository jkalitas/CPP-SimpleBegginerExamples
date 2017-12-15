#include "Person.h"

Person::Person(){

}

Person::Person(string firstName,string lastName, int age){
    this->_age = age;
    this->_firstName = firstName;
    this->_lastName = lastName;
}

Person::Person(string firstName,string lastName){
    this->_firstName = firstName;
    this->_lastName = lastName;
}

Person::~Person(){
    cout << "Person Destructor called"<< endl ;

}

void Person::set_firstName(const string &_firstName) {
    this->_firstName = _firstName;
}

void Person::set_lastName(const string &_lastName) {
    this->_lastName = _lastName;
}

void Person::set_age(int _age) {
    this->_age = _age;
}

void Person::sayHello(){

}