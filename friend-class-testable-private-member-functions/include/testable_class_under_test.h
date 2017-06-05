// Copyright (C) 2017 Florian Kromer - MIT

#ifndef FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_
#define FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_

class TestableClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
  int ProtectedMemberFunction(int multiplicand);
  int PrivateMemberFunction(int multiplicand);
};

#endif  // FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_TESTABLE_CLASS_UNDER_TEST_H_
