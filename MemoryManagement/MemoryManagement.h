/**
 * @header MemoryManagement.h
 *
 * @brief MemoryManagement is class with examples of how to do memory
 * management in C++.
 *
 * @author jkalitas 2017
 *
 * */
#ifndef CPP_SIMPLEBEGINNEREXAMPLES_MEMORYMANAGEMENT_H

#include "../Example.h"

#define CPP_SIMPLEBEGINNEREXAMPLES_MEMORYMANAGEMENT_H

/**
 * Examples of how to do Memory Management.
 */
class MemoryManagement : public Example {
public:
    /**
     * Default constructor.
     */
    MemoryManagement();
    /**
     * Default destructor.
     */
    ~MemoryManagement() override;
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

private:

};


#endif //CPP_SIMPLEBEGINNEREXAMPLES_MEMORYMANAGEMENT_H
