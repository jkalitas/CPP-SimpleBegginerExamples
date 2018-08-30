/**
 * @header StreamAndFiles.h
 *
 * @brief StreamAndFiles is class with examples of how to handle with streams and files in C++.
 *
 * @author jkalitas 2017
 *
 * */
#include "StreamIO.h"
#include <iostream>
#include <string>
#include <iomanip>

/**
 * A default constructor.
 */
StreamIO::StreamIO() : Example() {
  runExample();
}

/**
 * A default destructor.
 */
StreamIO::~StreamIO() {

}

/**
 * Getter for example's name.
 * @return the example's name.
 */
std::string StreamIO::getName() {
  return "[STREAM AND FILES EXAMPLE]";
}

/**
 * Sub example with input and output of strings.
 */
void inputAndOutputStrings() {
  std::string name;
  std::cout << "Full name: ";
  std::getline(std::cin, name);

  std::string address;
  std::cout << "Full address: ";
  std::getline(std::cin, address);

  std::cout << name << std::endl << address << std::endl;
}

/**
 * Sub example with Manipulators.
 */
void manipulators() {
  //Defining a minimum field width with 20 chars, note that if the value exceeds the minimum field width,
  // it will be displayed in full.
  const char *message = "wibble";
  std::cout << "[" << message << "]" << std::endl;
  std::cout << "[" << std::setw(20) << message << "]" << std::endl;
  std::cout << "[" << std::setw(5) << message << "]" << std::endl;

  //Defining justification
  const char *message1 = "Hello";
  const char *message2 = "World";
  std::cout << "[" << std::setw(20) << message1 << "]" << std::endl;
  std::cout << "[" << std::setw(20) << message2 << "]" << std::endl << std::endl;
  //Left Justification
  std::cout << std::left;
  std::cout << "[" << std::setw(20) << message1 << "]" << std::endl;
  std::cout << "[" << std::setw(20) << message2 << "]" << std::endl << std::endl;
  //Right Justification
  std::cout << std::right;
  std::cout << "[" << std::setw(20) << message1 << "]" << std::endl;
  std::cout << "[" << std::setw(20) << message2 << "]" << std::endl << std::endl;
  //Internal Justification
  std::cout << "[" << std::setw(10) << -123.45 << "]" << std::endl;
  std::cout << "[" << std::setw(10) << -67.89 << "]" << std::endl << std::endl;
  std::cout << std::internal;
  std::cout << "[" << std::setw(10) << -123.45 << "]" << std::endl;
  std::cout << "[" << std::setw(10) << -67.89 << "]" << std::endl << std::endl;
  //Reinstatiing the default (right) justification
  std::cout << std::right;
}

/**
 * Sub example with Floating Point Format.
 */
void floatingPointFormat() {
  double pi = 3.14159235359;
  double s = 1.989E30;
  double n = 42.0;

  //Set precision
//  std::setprecision(4);

  //FixedFormat
  std::cout << pi << std::endl;
  std::cout << s << std::endl;
  std::cout << n << std::endl << std::endl;

  //Scientific Format
  std::cout << std::scientific;
  std::cout << pi << std::endl;
  std::cout << s << std::endl;
  std::cout << n << std::endl << std::endl;

  //Reinstate to default, note that we are saying that is not fixed nor scientific
  std::cout.unsetf(std::ios::fixed | std::ios::scientific);
  std::cout << pi << std::endl;
  std::cout << s << std::endl;
  std::cout << n << std::endl << std::endl;
}

void miscellaneousOutput(){
  int x = 3;
  int y = 4;
  int z = -5;

  //Show/Hide the sign
  std::cout << x << " "<< y << " " << z  << " " << std::endl;
  std::cout << std::showpos;
  std::cout << x << " "<< y << " " << z  << " " << std::endl;
  std::cout << std::noshowpos;
  std::cout << x << " "<< y << " " << z  << " " << std::endl;

  //Formatting in different bases
  std::cout << 64 << std::endl;
  std::cout << std::oct << 64 << std::endl;
  std::cout << std::hex << 64 << std::endl;
  std::cout << std::noshowbase << 64 << std::endl;

  //Letters uppercase with numbers
  std::cout << std::hex;
  std::cout << 123456789 << std::endl;
  std::cout << std::uppercase << 123456789 << std::endl;
  std::cout << std::nouppercase << 123456789 << std::endl;
  std::cout << std::dec << std::endl;
}

/**
 * Run's the example.
 */
void StreamIO::runExample() {
  //Using the std error std::cout only to give for better viewing on the console
  std::cout << getName() << std::endl;

  std::cout << "Inputting and Outputting Strings" << std::endl;
//  inputAndOutputStrings();

  std::cout << "Manipulators" << std::endl;
//  manipulators();
  std::cout << "Floating Point Format" << std::endl;
//  floatingPointFormat();

  std::cout << "Miscellaneous Output Format" << std::endl;
//  miscellaneousOutput();

}