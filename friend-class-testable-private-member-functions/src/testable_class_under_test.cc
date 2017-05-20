#include "testable_class_under_test.h"
#include "class_under_test.h"

ClassUnderTest cut;

int TestableClassUnderTest::ProtectedMemberFunction(int multiplicand){
  return cut.ProtectedMemberFunction(multiplicand);
}

int TestableClassUnderTest::PrivateMemberFunction(int multiplicand){
  return cut.PrivateMemberFunction(multiplicand);
}
