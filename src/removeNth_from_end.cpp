
// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

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

// '0'->1->2->3->4 : n = 2
// 删除倒数第n个节点，所以被删除的节点距离n-1个节点到尾节点(即快慢指针差了n-1个节点),使用双指针
// fast
// 先走n-1步，fast走到最后时,slow指向了需要被删除的点(这怎么删除)，所以在头节点前创建一个
// dummy 节点'0'.

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *dummy = new ListNode(0, head);

    ListNode *fast = head;
    ListNode *slow = dummy;

    //fast pointer move n-1 
    while(--n) {
      fast = fast->next;
    }

    while(fast->next) {
      slow = slow->next;
      fast = fast->next;
    }

    slow->next = slow->next->next;
    ListNode *ans = dummy->next;  //返回head指针error
    delete dummy;
    return ans;
  }
};