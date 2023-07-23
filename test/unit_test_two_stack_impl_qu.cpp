#include "two_stack_impl_queue.cpp"
#include <gtest/gtest.h>

// Test the MyQueue class
TEST(MyQueueTest, BasicTest) {
  CQueue* obj = new CQueue();
  obj->appendTail(1);
  obj->appendTail(2);
  obj->appendTail(3);


  EXPECT_EQ(obj->deleteHead(), 1);
  EXPECT_EQ(obj->deleteHead(), 2);
  EXPECT_EQ(obj->deleteHead(), 3);
}