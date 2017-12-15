#include <iostream>
#include "Person.h"

using namespace std;



int main() {

    cout << "##############     Example 1     ##############\n"<< endl;
    /**
     * Declaring pointers and storing values on it.
     */
    // declare a pointer to int and allocate space for it
    // with the keyword new
    int *pInt = new int;

    // declare a pointer to double and allocate space for it
    // with the keyword new
    double * pDouble = new double;

    // store the value 3 in the memory location
    // pointed to by pInt
    *pInt = 3;

    // store the value 5.0 in the memory location
    // pointed to by pDouble
    *pDouble = 5.0;
    cout << "pInt: " << *pInt << " | Pointer : " << pInt << endl;
    cout << "pDouble: "<< *pDouble << " | Pointer : " << pDouble << endl << endl;

    delete pDouble;
    delete pInt;

    cout << "##############     Example 2     ##############\n"<< endl;
    /**
     * Handling Memory with an Object
     */
    Person * person1 = new Person("Jose","Silva",19);

    delete person1;

    return 0;
}