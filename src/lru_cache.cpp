// LRU (最近最少使用) 缓存 约束的数据结构。
// 实现 LRUCache 类：
// LRUCache(int capacity) 以 正整数 作为容量 capacity 初始化 LRU 缓存
// int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1
// 。 void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value
// ； 如果不存在，则向缓存中插入该组 key-value 。如果插入操作导致关键字数量超过
// capacity ， 则应该 逐出 最久未使用的关键字。 函数 get 和 put 必须以 O(1)
// 的平均时间复杂度运行

#include <cstddef>
#include <list>
#include <unordered_map>
#include <utility>

class LRUCache {
private:
  std::size_t size;
  std::unordered_map<int, std::list<std::pair<int, int>>::iterator> un_map;
  std::list<std::pair<int, int>> li;

public:
  LRUCache(int capacity) : size(capacity) {}

  //如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1
  int get(int key) {
    if (!un_map.count(key))
      return -1;

    li.splice(li.cbegin(), li, un_map[key]); // move to front
    return un_map[key]->second;
  }

  //如果关键字 key 已经存在，则变更其数据值 value
  //如果不存在，则向缓存中插入该组 key-value 。如果插入操作导致关键字数量超过
  // capacity ， 则应该 逐出 最久未使用的关键字
  void put(int key, int value) {
    if(un_map.count(key)) {
      auto it = un_map[key];
      it->second = value;
      li.splice(li.cbegin(), li, it); //move to front
    }else {
      li.emplace_front(std::pair<int,int>(key,value)); //add node 
      un_map.insert({key,li.begin()});  // insert to hash
      if(un_map.size() > size) {
        un_map.erase(li.back().first);
        li.pop_back();
      }
    }
  }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */