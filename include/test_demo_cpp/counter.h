/**
 * @file counter.h
 * @author Veiko Vunder
 * @brief
 * @version 0.1
 * @date 2022-11-03
 *
 * @copyright Copyright 2022 Veiko Vunder
 *
 */

class Counter
{
  public:
    Counter();
    void increment(int);
    int get_value();
  private:
    int counter_value_;
};

