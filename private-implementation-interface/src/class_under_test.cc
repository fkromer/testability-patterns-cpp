#ifndef TEST
  #include "class_under_test.h"
#else
  #include "class_under_test_internal.h"
#endif

int ClassUnderTest::PublicMemberFunction(int multiplicand) {
  int multiplier = 42;
  return multiplier*multiplicand;
}

int ClassUnderTest::ProtectedMemberFunction(int multiplicand) {
  int multiplier = 42;
  return multiplier*multiplicand;
}

int ClassUnderTest::PrivateMemberFunction(int multiplicand) {
  int multiplier = 42;
  return multiplier*multiplicand;
}
