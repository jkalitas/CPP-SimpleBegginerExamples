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
    std::cout<< getName() << std::endl;

    showDataTypesSize();

    overflowShort();

    divisionErrors();
}

void BasicDataTypes::showDataTypesSize(){
    std::cout << "##############\n###\t Data Type Sizes"<< std::endl << std::endl;
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

/**
 * Example of a short being overflowed and then we lost the
 * value of it.
 */
void BasicDataTypes::overflowShort(){
    std::cout << "##############\n\t### Overflow a short"<< std::endl << std::endl;
    unsigned short x = 65535; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << std::endl;
    x = x + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
    std::cout << "x is now: " << x << std::endl;//After adding 1 to the short value this now as a value of 0

    //The same applies with the smallest value
    std::cout << std::endl;
    std::cout << "x was: " << x << std::endl;
    x = x - 1; // overflow!
    std::cout << "x is now: " << x << std::endl;

}

/**
 * Example of a short being overflowed and then we lost the
 * value of it.
 */
void BasicDataTypes::divisionErrors(){
    std::cout << "##############\n\t### Division Common Errors"<< std::endl << std::endl;
    std::cout <<"20/4 = " << 20 / 4 << std::endl;
    std::cout <<"8/5 = " << 8 / 5 << std::endl;//It discards the decimal part

    //the right way
    std::cout <<"8/5 = " << 8 / 5.0 << std::endl;
    std::cout <<"8/5 = " << 8 / float{5} << std::endl;
    std::cout <<"8/5 = " << 8 / double{5} << std::endl;

}
