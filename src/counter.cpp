/**
 * @file counter.cpp
 * @author Veiko Vunder
 * @brief
 * @version 0.1
 * @date 2022-11-03
 *
 * @copyright Copyright 2022 Veiko Vunder
 *
 */

#include <test_demo_cpp/counter.h>

// Initialize counter value to 0
Counter::Counter()
{
  counter_value_ = 0;
}

// A method for increasing the counter value
void Counter::increment(int step)
{
  counter_value_ += step;
}

// A method to access counter value externally
int Counter::get_value()
{
  return counter_value_;
}

