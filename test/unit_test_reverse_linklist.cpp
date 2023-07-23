#include "reverse_linklist.cpp"
#include <gtest/gtest.h>

// Test the reverseLinkedList function
TEST(ReverseLinkedListTest, BasicTest) {
  // Create a linked list: 1->2->3->4->5
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  // Expected reversed linked list: 5->4->3->2->1
  ListNode *expected = new ListNode(5);
  expected->next = new ListNode(4);
  expected->next->next = new ListNode(3);
  expected->next->next->next = new ListNode(2);
  expected->next->next->next->next = new ListNode(1);

  Solution s;
  ListNode *result = s.reverseList(head);

  // Compare the reversed linked list with the expected one
  while (result != nullptr && expected != nullptr) {
    EXPECT_EQ(result->val, expected->val);
    result = result->next;
    expected = expected->next;
  }

  // Clean up the linked lists
  while (head != nullptr) {
    ListNode *temp = head;
    head = head->next;
    delete temp;
  }
  while (result != nullptr) {
    ListNode *temp = result;
    result = result->next;
    delete temp;
  }
}