#ifndef VBRFIX_FIXER_H
#define VBRFIX_FIXER_H

#include <iostream>
#include <sstream>
#include "vbrfix.h"
using namespace std;
class Fixer:public VbrFix{
  public:
  void fix(const char* file, const char* outFile,int flags = 0);
};

#endif