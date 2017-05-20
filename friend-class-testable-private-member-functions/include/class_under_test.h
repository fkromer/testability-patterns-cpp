#ifndef CLASS_UNDER_TEST_H_
#define CLASS_UNDER_TEST_H_

class ClassUnderTest
{
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

#endif  // CLASS_UNDER_TEST_H_
