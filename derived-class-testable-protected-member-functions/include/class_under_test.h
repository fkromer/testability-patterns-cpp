// Copyright (C) 2017 Florian Kromer - MIT

#ifndef DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
#define DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_

class ClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
 protected:
  int ProtectedMemberFunction(int multiplicand);
};

#endif  // DERIVED_CLASS_TESTABLE_PROTECTED_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
