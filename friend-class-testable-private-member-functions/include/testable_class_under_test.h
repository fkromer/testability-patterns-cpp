#ifndef TESTABLE_CLASS_UNDER_TEST_H_
#define TESTABLE_CLASS_UNDER_TEST_H_

//class ClassUnderTest;  // forward declaration required

class TestableClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
  int ProtectedMemberFunction(int multiplicand);
  int PrivateMemberFunction(int multiplicand);
};

#endif  // TESTABLE_CLASS_UNDER_TEST_H_
