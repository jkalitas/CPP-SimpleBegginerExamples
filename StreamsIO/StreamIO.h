/**
 * @header StreamAndFiles.h
 *
 * @brief StreamAndFiles is class with examples of how to handle with streams and files in C++.
 *
 * @author jkalitas 2017
 *
 * */

#ifndef CPP_SIMPLEBEGINNEREXAMPLES_STREAMANDFILES_H
#include "../Example.h"
#define CPP_SIMPLEBEGINNEREXAMPLES_STREAMANDFILES_H

class StreamIO : public Example {
 public:
  /**
   * Default constructor.
   */
  StreamIO();
  /**
   * Default destructor.
   */
  ~StreamIO() override;
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

#endif //CPP_SIMPLEBEGINNEREXAMPLES_STREAMANDFILES_H
