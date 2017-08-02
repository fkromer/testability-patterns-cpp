// Copyright (C) 2017 Florian Kromer - MIT

#include "../include/class_under_test.h"

int ClassUnderTest::PublicMemberFunction(int multiplicand) {
  int multiplier = 42;
  return multiplier*multiplicand;
}

// compile time test hook to substitute the protected member function with a
// friend function
#ifndef TEST
int ClassUnderTest::ProtectedMemberFunction(int multiplicand) {
#else
int ProtectedMemberFunction(int multiplicand) {
#endif
  int multiplier = 42;
  return multiplier*multiplicand;
}

// compile time test hook to substitute the private member function with a
// friend function
#ifndef TEST
int ClassUnderTest::PrivateMemberFunction(int multiplicand) {
#else
int PrivateMemberFunction(int multiplicand) {
#endif
  int multiplier = 42;
  return multiplier*multiplicand;
}
