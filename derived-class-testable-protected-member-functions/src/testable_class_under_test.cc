// Copyright (C) 2017 Florian Kromer - MIT

#include "testable_class_under_test.h"
#include "class_under_test.h"

int TestableClassUnderTest::ProtectedMemberFunction(int multiplicand){
  return ClassUnderTest::ProtectedMemberFunction(multiplicand);
}
