#include "class_under_test.h"  // includes cut and tcut
#include "gtest/gtest.h"

TEST(PublicMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.PublicMemberFunction(directTestInput));
}

// trying to test a protected member function like follows leads to errors during compilation -> is not testable
//TEST(ProtectedMemberFunctionTest, ExemplaryGoodCase) {
//  ClassUnderTest cut;
//  int directTestInput = 1;
//  int expectedDirectTestOutput = 42;
//  EXPECT_EQ(expectedDirectTestOutput, cut.ProtectedMemberFunction(directTestInput));
//}

// trying to test a private member function like follows leads to errors during compilation -> is not testable
//
//TEST(PrivateMemberFunctionTest, ExemplaryGoodCase) {
//  ClassUnderTest cut;
//  int directTestInput = 1;
//  int expectedDirectTestOutput = 42;
//  EXPECT_EQ(expectedDirectTestOutput, cut.PrivateMemberFunction(directTestInput));
//}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
