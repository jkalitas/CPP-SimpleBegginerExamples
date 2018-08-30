/**
 * @header ProcessingFiles.h
 *
 * @brief ProcessingFiles is class with examples of how to handle with streams and files in C++.
 *
 * @author jkalitas 2018
 *
 * */

#include "ProcessingFiles.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


std::fstream fs("File.txt", std::ios_base::out | std::ios_base::out);

bool initializeStreams(){
    if(fs.is_open()){
        return true;
    }else{
        std::cout << "Couldn't open file" << std::endl;
        return false;
    }

}

/**
 * A default constructor.
 */
ProcessingFiles::ProcessingFiles() : Example() {
    if(initializeStreams()){
        std::cout << "RUN EXAMPLE" << std::endl;
        runExample();
    }
}

/**
 * A default destructor.
 */
ProcessingFiles::~ProcessingFiles() {
   fs << "CLOSING" << std::endl;
   fs.close();
}



/**
 * Getter for example's name.
 * @return the example's name.
 */
std::string ProcessingFiles::getName() {
    return "[STREAM AND FILES EXAMPLE]";
}

/**
 * Write to file example.
 */
void writeFile() {
    if(fs.is_open()){
        std::string inputMessage;
        fs << "What should be written?" << std::endl;

        if(!(std::getline(std::cin,inputMessage))){
            std::cout << "Error getting line" << std::endl;
        }
    }
}

/**
 * Read to file example.
 */
void readFile() {
    std::string message;

    if(fs.is_open()){
        while(std::getline(fs,message)){
            std::cout << message << std::endl;
        }
    }
}

/**
 * Run's the example.
 */
void ProcessingFiles::runExample() {
    //Using the std error std::cout only to give for better viewing on the console
    std::cout << getName() << std::endl;

    std::cout << "Writing to a file" << std::endl;
//    writeFile();

    std::cout << "Reading from a file" << std::endl;
    readFile();
}