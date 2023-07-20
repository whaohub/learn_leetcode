// input:2 output:2
//解释：有两种方法可以爬到楼顶。
//  1. 1 阶 + 1 阶
//  2. 2 阶

//解法一:想得到爬到n阶的最多方法，则一定等于n-1，n-2的最多方法的和，举例n=5
//        5
//     /     \
//    4       3
//   / \     / \
//  3   2   2   1
// / \ / \ / \
//2  1 1 0 1 0
//n = 1;ret =1,n = 0;ret:1
//方法一，使用递归，f(n) = f(n - 1) + f(n - 2); base:1|0 ret=1
// 递归算法的时间复杂度怎么计算？就是用子问题个数乘以解决一个子问题需要的时间。
// 首先计算子问题个数，即递归树中节点的总数。显然二叉树节点总数为指数级别，所以子问题个数为 O(2^n)。
// 然后计算解决一个子问题的时间，在本算法中，没有循环，只有 f(n - 1) + f(n - 2) 一个加法操作，时间为 O(1)。
// 所以，这个算法的时间复杂度为二者相乘，即 O(2^n)

//优化一:可从以上的递归树可以看出存在重复计算，f(3)倍计算俩次，解决此问题可以使用缓存数组去实现，
// 当遇到重复运算直接从缓存数组中获取
// 优化后算法时间复杂度O(n),由于使用了数组缓存，所以增加了空间复杂度O(n)

//优化二:由于我们并不关心缓存过程中的中间值，所以可以使用滚动更新的方式优化掉O(n)的空间复杂度


#include <vector>
class Solution {
public:

    //Solution one:
    int climbStairs(int n) {
      if(n == 1 || n== 0) return 1;
      return climbStairs(n - 1) + climbStairs(n - 2);
    }

    //Solution two:
    int climbStairs1(int n) {
      std::vector<int> dp(n + 1,0);
      dp[0] = 1;
      dp[1] = 1;

      for(int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
      }
      return dp[n];
    }

    //Solution three:
    int climbStairs2(int n) {
      int prv_1 = 1;
      int prv_2 = 1;

      for(int i = 2; i <= n; ++i) {
        int dp_tmp = prv_1 + prv_2;
        prv_2 = prv_1;
        prv_1 = dp_tmp;
      }

      return prv_1;
    }

};

