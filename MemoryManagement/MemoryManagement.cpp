//
// Created by jsilva on 11-01-2018.
//

#include "MemoryManagement.h"
#include "Person.h"

/**
 * A default constructor.
 */
MemoryManagement::MemoryManagement() : Example() {
    runExample();
}

/**
 * A default destructor.
 */
MemoryManagement::~MemoryManagement() {

}

/**
 * Getter for example's name.
 * @return the example's name.
 */
std::string MemoryManagement::getName() {
    return "[MEMORY MANAGEMENT EXAMPLE]";
}

/**
 * Run's the example.
 */
void MemoryManagement::runExample() {
    //Using the std error cout only to give for better viewing on the console
    std::cerr<< getName() << std::endl;

    std::cout << "##############     Example 1     ##############\n"<< std::endl;
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
    std::cout << "pInt: " << *pInt << " | Pointer : " << pInt << std::endl;
    std::cout << "pDouble: "<< *pDouble << " | Pointer : " << pDouble << std::endl << std::endl;

    delete pDouble;
    delete pInt;

    std::cout << "##############     Example 2     ##############\n"<< std::endl;
    /**
     * Handling Memory with an Object
     */
    Person * person1 = new Person("Jose","Silva",19);
    //deleting the pointer allocated
    delete person1;
}
