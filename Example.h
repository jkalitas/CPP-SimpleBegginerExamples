/**
 * @header Example.h
 *
 * @brief Example is a class to be extendend where the example and it's
 * information is properly explained while running.
 *
 * @author jkalitas 2017
 *
 * */

#ifndef CPP_SIMPLEBEGINNEREXAMPLES_EXAMPLE_H

#include <iostream>

#define CPP_SIMPLEBEGINNEREXAMPLES_EXAMPLE_H

/**
 * A super class to be extended by all the examples, giving a
 * glimpse on heritage.
 */
class Example{
public:
    /**
     * A default constructor.
     */
    Example();
    /**
     * A default destructor.
     */
    virtual ~Example();
    /**
     * Getter for example's name.
     * @return the example's name.
     */
    virtual std::string getName(){};

private:
    /**
     * Example's name.
     */
    std::string _name;
    /**
     * Run's the example.
     */
    virtual void runExample(){};
};


#endif //CPP_SIMPLEBEGINNEREXAMPLES_EXAMPLE_H
