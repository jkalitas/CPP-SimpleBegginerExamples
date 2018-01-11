/**
 * @header BasicDataTypes.h
 *
 * @brief BasicDataTypes is class with examples of how to do memory
 * management in C++.
 *
 * @author jkalitas 2017
 *
 * */
#include "BasicDataTypes.h"

/**
 * A default constructor.
 */
BasicDataTypes::BasicDataTypes() : Example() {
    runExample();
}

/**
 * A default destructor.
 */
BasicDataTypes::~BasicDataTypes() {

}

/**
 * Getter for example's name.
 * @return the example's name.
 */
std::string BasicDataTypes::getName() {
    return "[BASIC DATA TYPES EXAMPLE]";
}

/**
 * Run's the example.
 */
void BasicDataTypes::runExample() {
    //Using the std error std::cout only to give for better viewing on the console
    std::cerr<< getName() << std::endl;

    showDataTypesSize();


}

void BasicDataTypes::showDataTypesSize(){
    std::cerr << "##############\n\t### Data Type Sizes"<< std::endl << std::endl;
    std::cout << "long long:\t\t" << sizeof(long long) << " bytes" << std::endl; // Check if your compiler supports
    std::cout << "char16_t:\t\t" << sizeof(char16_t) << " bytes" << std::endl; // Check if your compiler supports
    std::cout << "char32_t:\t\t" << sizeof(char32_t) << " bytes" << std::endl; // Check if your compiler supports

    std::cout << "bool:\t\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "short:\t\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "float:\t\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;

}

