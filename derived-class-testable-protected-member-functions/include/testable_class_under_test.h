// Copyright (C) 2017 Florian Kromer - MIT

#ifndef TESTABLE_CLASS_UNDER_TEST_H_
#define TESTABLE_CLASS_UNDER_TEST_H_

#include "class_under_test.h"

class TestableClassUnderTest : public ClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
  int ProtectedMemberFunction(int multiplicand);
};

#endif  // TESTABLE_CLASS_UNDER_TEST_H_
