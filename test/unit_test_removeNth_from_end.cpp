#include "removeNth_from_end.cpp"
#include <gtest/gtest.h>

// Include the definition of the ListNode and removeNthFromEnd function here

// Helper function to convert an array to a linked list
ListNode *arrayToList(const std::vector<int> &arr) {
  ListNode *dummy = new ListNode(0);
  ListNode *curr = dummy;
  for (int val : arr) {
    curr->next = new ListNode(val);
    curr = curr->next;
  }
  return dummy->next;
}

// Helper function to convert a linked list to an array
std::vector<int> listToArray(ListNode *head) {
  std::vector<int> arr;
  ListNode *curr = head;
  while (curr != nullptr) {
    arr.push_back(curr->val);
    curr = curr->next;
  }
  return arr;
}

// Test the removeNthFromEnd function
TEST(RemoveNthFromEndTest, BasicTest) {
  Solution s;
  // Test case: 1->2->3->4->5, n = 2
  ListNode *head = arrayToList({1, 2, 3, 4, 5});
  ListNode *expected = arrayToList({1, 2, 3, 5});
  ListNode *result = s.removeNthFromEnd(head, 2);

  EXPECT_EQ(listToArray(result), listToArray(expected));

  // Test case: 1, n = 1
  ListNode *head1 = arrayToList({1});
  ListNode *expected1 = nullptr;
  ListNode *result1 = s.removeNthFromEnd(head1, 1);
  assert(result1 == expected1);
  while (result1) {
    ListNode *temp = result;
    result = result->next;
    delete temp;
  }
}