/**
 * @header BasicDataTypes.h
 *
 * @brief BasicDataTypes is class with examples of how to do memory
 * management in C++.
 *
 * @author jkalitas 2017
 *
 * */
#ifndef CPP_SIMPLEBEGINNEREXAMPLES_BASICDATATYPES_H
#include "../Example.h"
#include <iostream>
#define CPP_SIMPLEBEGINNEREXAMPLES_BASICDATATYPES_H




/**
 * Examples of how to do Reference Types.
 */
class BasicDataTypes : public Example {
public:
    /**
     * Default constructor.
     */
    BasicDataTypes();
    /**
     * Default destructor.
     */
    ~BasicDataTypes() override;
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
     * showDataTypesSize
     */
    void showDataTypesSize();


};




#endif //CPP_SIMPLEBEGINNEREXAMPLES_BASICDATATYPES_H
