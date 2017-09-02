#include "gtest/gtest.h"
#include "../src/class-under-test.h"
 
TEST (ParameterInjectionTest, WillAlmostAlwaysFail) { 
    EXPECT_EQ (42, (324.0));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
