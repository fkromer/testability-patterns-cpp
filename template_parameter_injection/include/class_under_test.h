#ifndef CLASS_UNDER_TEST_H_
#define CLASS_UNDER_TEST_H_

template<typename DOC>
class ClassUnderTestTemplate {
public:
   DOC& dependentOnClass() {
      return dependentOnClass_;  // member variable
   }
private:
   std:bool privateMemberFunction(void) {
      return dependentOnClass_.privateMemberFunction(bool return);
   }
   DOC dependentOnClass_;
};
class DOC;
typedef ClassUnderTestTemplate<DOC> ClassUnderTest;

#endif // CLASS_UNDER_TEST_H_
