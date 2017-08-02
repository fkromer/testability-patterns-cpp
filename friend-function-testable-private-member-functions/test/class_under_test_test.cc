// Copyright (C) 2017 Florian Kromer - MIT

#include "../include/class_under_test.h"
#include "gtest/gtest.h"

// testing public member functions is not critical
TEST(PublicMemberFunctionTest, ExemplaryGoodCase) {
  ClassUnderTest cut;
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, cut.PublicMemberFunction(directTestInput));
}

// testing a protected member function is possible when substituting it with a
// friend function
TEST(ProtectedMemberFunctionTest, ExemplaryGoodCase) {
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, ProtectedMemberFunction(directTestInput));
}

// testing a private member function is possible when substituting it with a
// friend function
TEST(PrivateMemberFunctionTest, ExemplaryGoodCase) {
  int directTestInput = 1;
  int expectedDirectTestOutput = 42;
  EXPECT_EQ(expectedDirectTestOutput, PrivateMemberFunction(directTestInput));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
