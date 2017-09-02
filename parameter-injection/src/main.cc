#include "../include/class_under_test.h"
#include <iostream>
using std::cout;
using std::endl;

int main(void) {
  int calculation_result;
  ClassUnderTest cut;
  calculation_result = cut.CalculationUsingDependentOnClass();
  cout << calculation_result << endl;
  return 0;
}
