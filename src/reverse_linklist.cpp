//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

#include <assert.h>
/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// 1->2->3->4->null
// null<-1<-2<-3<-4
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    assert(head);

    ListNode *cur = head;
    ListNode *pre = nullptr;

    while (cur) {
      ListNode *next = cur->next; // backup next
      cur->next = pre;
      pre = cur;
      cur = next;
    }

    return pre;
  }
};