/**
 * Judge link list has cycle
 */

//    +-----+
//    |     |
// 1->2->3->4
// 定义快慢指针，slow:移动一个节点，fast:移动俩个节点，slow==fast has cycle

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {

    if (head == nullptr || head->next == nullptr)
      return false;

    ListNode *slow = head;
    ListNode *fast = slow->next;

    while (fast != nullptr && fast->next != nullptr) {

      //move slow(one step) and fast(two step)
      slow=slow->next;
      fast=fast->next->next;

      if(slow == fast) //overlap
        return true;
    }
    return false;
  };
};