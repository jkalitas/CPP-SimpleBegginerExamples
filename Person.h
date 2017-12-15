//
// Created by jsilva on 15-12-2017.
//

#ifndef CPP_SIMPLEBEGINNEREXAMPLES_PERSON_H

#include <iostream>
#define CPP_SIMPLEBEGINNEREXAMPLES_PERSON_H
using namespace std;
class Person{

private:
    string _firstName;
    string _lastName;
    int _age;
public:
    Person();
    Person(string firstName,string lastName, int age);
    Person(string firstName,string lastName);
    ~Person();

    void set_firstName(const string &_firstName);

    void set_lastName(const string &_lastName);

    void set_age(int _age);

    void sayHello();
};
#endif //CPP_SIMPLEBEGINNEREXAMPLES_PERSON_H
