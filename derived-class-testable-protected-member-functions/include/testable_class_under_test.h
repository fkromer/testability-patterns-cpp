// Copyright (C) 2017 Florian Kromer - MIT

#ifndef DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_
#define DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_

#include "../include/class_under_test.h"

class TestableClassUnderTest : public ClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
  int ProtectedMemberFunction(int multiplicand);
};

#endif  // DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_
