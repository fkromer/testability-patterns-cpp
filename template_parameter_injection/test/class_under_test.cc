#include "class_under_test.h"
#include "gtest/gtest.h"

class ClassUnderTest_WithDocMock: public AClassUnderTest {
public:
   ClassUnderTestTemplate<DocStub> cut;
};

TEST(ClassUnderTest_WithDocMock, CallsDocPublicMemberFunction) {
   EXPECT_CALL(cut.doc(), privateMemberFunction());
}
