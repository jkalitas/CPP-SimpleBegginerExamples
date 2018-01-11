/**
 * @header MemoryManagement.h
 *
 * @brief MemoryManagement is class with examples of how to do memory
 * management in C++.
 *
 * @author jkalitas 2017
 *
 * */

#ifndef CPP_SIMPLEBEGINNEREXAMPLES_REFERENCETYPES_H
#include "../Example.h"
#include <iostream>
#define CPP_SIMPLEBEGINNEREXAMPLES_REFERENCETYPES_H


/**
 * Examples of how to do Reference Types.
 */
class ReferenceTypes : public Example {
public:
    /**
     * Default constructor.
     */
    ReferenceTypes();
    /**
     * Default destructor.
     */
    ~ReferenceTypes() override;
    /**
     * Override of Example::getName function.
     * @return the example's name.
     */
    std::string getName() override;

private:
    /**
     * Run's the example.
     */
    void runExample() override;
    /**
     * Receives and manipulates a values passed by a reference to it's memory position.
     *
     * @param num1 address of number.
     */
    void passByRef(int &num1);
    /**
     * Receives and manipulates a values passed.
     *
     * @param num1 number to be passed.
     */
    void passByValue(int num1);

};


#endif //CPP_SIMPLEBEGINNEREXAMPLES_REFERENCETYPES_H
