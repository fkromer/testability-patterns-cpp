#include "class_under_test_internal.h"  // include of test specific interface
#include "gtest/gtest.h"

// testing public member functions is not critical
TEST(PublicMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.PublicMemberFunction(directTestInput));
}

// testing protected member function is jsut possible because test specific
// internal interface is used
TEST(ProtectedMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.ProtectedMemberFunction(directTestInput));
}

// testing private member function is just possible because test specific
// internal interface is used
TEST(PrivateMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.PrivateMemberFunction(directTestInput));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
