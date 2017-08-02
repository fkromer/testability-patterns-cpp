// Copyright (C) 2017 Florian Kromer - MIT

#ifndef FRIEND_FUNCTION_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
#define FRIEND_FUNCTION_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_

class ClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
// compile time test hook to substitute the protected and private member functions
// ...
#ifndef TEST
 protected:
  int ProtectedMemberFunction(int multiplicand);
 private:
  int PrivateMemberFunction(int multiplicand);
#endif
};


// ...
// with public friend functions
#ifdef TEST
extern int ProtectedMemberFunction(int multiplicand);
extern int PrivateMemberFunction(int multiplicand);
#endif

#endif  // FRIEND_FUNCTION_TESTABLE_PRIVATE_MEMBER_FUNCTIONS_INCLUDE_CLASS_UNDER_TEST_H_
