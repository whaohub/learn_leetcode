#include "has_cycle.cpp"
#include <gtest/gtest.h>

TEST(HASCYCLETEST, CYCLETEST) {
  ListNode *head = new ListNode(1);
  ListNode *node2 = new ListNode(2);
  ListNode *node3 = new ListNode(3);
  ListNode *node4 = new ListNode(4);

  head->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node2; // Create a cycle

  // Test the function
  Solution s;
  EXPECT_TRUE(s.hasCycle(head));

  // Clean up memory
  node4->next = nullptr;
  delete node4;
  delete node3;
  delete node2;
  delete head;
}