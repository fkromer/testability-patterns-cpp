// Copyright (C) 2017 Florian Kromer - MIT

#ifndef FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
#define FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_

class ClassUnderTest {
#ifdef TEST
  friend class TestableClassUnderTest;
#endif
 public:
  int PublicMemberFunction(int multiplicand);
 protected:
  int ProtectedMemberFunction(int multiplicand);
 private:
  int PrivateMemberFunction(int multiplicand);
};

#endif  // FRIEND_CLASS_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
