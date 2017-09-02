#ifndef CLASS_UNDER_TEST_INTERNAL_H_
#define CLASS_UNDER_TEST_INTERNAL_H_

class ClassUnderTest {
 public:
  int PublicMemberFunction(int multiplicand);
  int ProtectedMemberFunction(int multiplicand);
  int PrivateMemberFunction(int multiplicand);
};

#endif  // CLASS_UNDER_TEST_INTERNAL_H_
