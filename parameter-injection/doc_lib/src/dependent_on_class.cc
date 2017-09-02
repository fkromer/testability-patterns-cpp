#include <stdlib.h>

class DependentOnClass {
 public:
  int GetHardToControlIntegerValue(){
   return rand();
  }
};
