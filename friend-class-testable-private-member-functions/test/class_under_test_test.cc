// Copyright (C) 2017 Florian Kromer - MIT

#include "../include/class_under_test.h"
#include "../include/testable_class_under_test.h"
#include "gtest/gtest.h"

// testing public member functions is not critical
TEST(PublicMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.PublicMemberFunction(directTestInput));
}

// trying to test a protected member function like follows leads to errors during compilation -> is not testable
// TEST(ProtectedMemberFunctionTest, ExemplaryGoodCase) {
//   ClassUnderTest cut;
//   int directTestInput = 1;
//   int expectedDirectTestOutput = 42;
//   EXPECT_EQ(expectedDirectTestOutput, cut.ProtectedMemberFunction(directTestInput));
// }

TEST(ProtectedMemberFunctionTest, ExemplaryGoodCase) {
  TestableClassUnderTest tcut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, tcut.ProtectedMemberFunction(directTestInput));
}

// trying to test a private member function like follows leads to errors during compilation -> is not testable
// TEST(PrivateMemberFunctionTest, ExemplaryGoodCase) {
//   ClassUnderTest cut;
//   int directTestInput = 1;
//   int expectedDirectTestOutput = 42;
//   EXPECT_EQ(expectedDirectTestOutput, cut.PrivateMemberFunction(directTestInput));
// }

TEST(PrivateMemberFunctionTest, ExemplaryGoodCase) {
  TestableClassUnderTest tcut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, tcut.PrivateMemberFunction(directTestInput));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
