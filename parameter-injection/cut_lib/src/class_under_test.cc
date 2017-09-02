#include "../include/dependent_on_class.h"

class ClassUnderTest {
 public:
  int CalculationUsingDependentOnClass(){
    DependentOnClass doc;
    int hard_to_control_integer = doc.GetHardToControlIntegerValue();
    return 42*hard_to_control_integer;
  }

  DependentOnClass doc;
};
