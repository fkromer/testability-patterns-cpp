// Copyright (C) 2017 Florian Kromer - MIT

#include "../include/class_under_test.h"

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
