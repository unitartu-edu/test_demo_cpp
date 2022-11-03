/**
 * @file counter_test.cpp
 * @author Veiko Vunder
 * @brief
 * @version 0.1
 * @date 2022-11-03
 *
 * @copyright Copyright 2022 Veiko Vunder
 *
 */

#include <test_demo_cpp/counter.h>
#include <gtest/gtest.h>

/*
 * Test whether the increment function works as expected
 */
TEST(TestSuits, counter_increment_test)
{
  Counter counter;
  counter.increment(3);
  EXPECT_EQ(counter.get_value(), 3);
  counter.increment(2);
  EXPECT_EQ(counter.get_value(), 5);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
