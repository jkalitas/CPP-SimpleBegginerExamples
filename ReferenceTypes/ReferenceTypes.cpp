/**
 * @header ReferenceTypes.h
 *
 * @brief ReferenceTypes is class with examples of how to do memory
 * management in C++.
 *
 * @author jkalitas 2017
 *
 * */
#include "ReferenceTypes.h"

/**
 * A default constructor.
 */
ReferenceTypes::ReferenceTypes() : Example() {
    runExample();
}

/**
 * A default destructor.
 */
ReferenceTypes::~ReferenceTypes() {

}

/**
 * Getter for example's name.
 * @return the example's name.
 */
std::string ReferenceTypes::getName() {
    return "[REFERENCE TYPES EXAMPLE]";
}

/**
 * Run's the example.
 */
void ReferenceTypes::runExample() {
    //Using the std error std::cout only to give for better viewing on the console
    std::cout<< getName() << std::endl;
    int num = 3;
    int &refNum = num;
//    int &refNum2; /*If we not initialize it gives a compile error*/

    /**
     * Checking the output they have the same memory location.
     */
    std::cout << "##############     Example 1     ##############\n"<< std::endl;
    std::cout << "num Value: " << num << " located at : " << &num << std::endl;
    std::cout << "refNum Value: "<< refNum << " located at : " << &refNum << std::endl << std::endl;

    std::cout << "##############     Example 2     ##############\n"<< std::endl;
    refNum++;
    /**
     * Incrementing the refNum will increment the referenced value and so the num will be incremented;
     */
    std::cout << "num Value: " << num << " located at : " << &num << std::endl;
    std::cout << "refNum Value: "<< refNum << " located at : " << &refNum << std::endl << std::endl;

    std::cout << "##############     Example 3     ##############\n"<< std::endl;
    /**
     * When we pass it to a function and increment, the variable isn't changed on main.
     */
    int num1 = 3;
    std::cout << "In main()" << std::endl;
    std::cout << "Value of num1 is " << num1 << std::endl;

    passByValue(num1);

    std::cout << "Back in main and the value of num is  " << num1 << std::endl << std::endl;

    std::cout << "##############     Example 4     ##############\n"<< std::endl;
    /**
     * Now we try to pass on reference.
     */
    passByRef(num1);
    std::cout << "Back in main and the value of num is  " << num1 << std::endl << std::endl;

}

/**
 * Receives and manipulates a values passed by a reference to it's memory position.
 *
 * @param num1 address of number.
 */
void ReferenceTypes::passByValue(int num1){
    std::cout << "In passByValue()" << std::endl;
    std::cout << "Value of num1 is " << num1 << std::endl;

    // modify num1, won't impact num
    num1++;

    std::cout << "num1 is now " << num1 << std::endl;
}

/**
 * Receives and manipulates a values passed.
 *
 * @param num1 number to be passed.
 */
void ReferenceTypes::passByRef(int &num1) {
    //NOTE: Once it's passed by reference and we change it inside the function,
    //the memory address also stores the changes. Hence the value received is incremented.

    std::cout << "In passByRef()" << std::endl;
    std::cout << "Value of num1 is " << num1 << std::endl;

    // modify num1 which will now change num
    num1++;

    std::cout << "num1 is now " << num1 << std::endl;
}
