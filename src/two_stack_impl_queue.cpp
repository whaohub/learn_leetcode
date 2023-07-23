// 用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和
//     deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的功能。(
//         若队列中没有元素，deleteHead 操作返回 - 1)
#include <stack>

class CQueue {
private:
  std::stack<int> en_stack; // add value to queue
  std::stack<int> de_stack; // remove value
public:
  CQueue() {}

  void appendTail(int value) { en_stack.push(value); }

  int deleteHead() {
    if (de_stack.empty()) {
      while (!en_stack.empty()) {
        de_stack.push(en_stack.top());
        en_stack.pop();
      }
    }
    if (de_stack.empty()) {
      return -1;
    } else {
      int ret = de_stack.top();
      de_stack.pop();
      return ret;
    }
  }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */