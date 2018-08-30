/**
 * @header StreamAndFiles.h
 *
 * @brief StreamAndFiles is class with examples of how to handle with streams and files in C++.
 *
 * @author jkalitas 2018
 *
 * */

#ifndef CPP_SIMPLEBEGINNEREXAMPLES_PROCESSINGFILES_H
#include <iostream>
#include "../Example.h"
#define CPP_SIMPLEBEGINNEREXAMPLES_PROCESSINGFILES_H


class ProcessingFiles : public Example{
public:
    /**
     * Default constructor.
     */
    ProcessingFiles();
    /**
     * Default destructor.
     */
    ~ProcessingFiles() override;
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
};


#endif //CPP_SIMPLEBEGINNEREXAMPLES_PROCESSINGFILES_H
