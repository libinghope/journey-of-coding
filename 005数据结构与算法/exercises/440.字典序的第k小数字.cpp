/*
 * @lc app=leetcode.cn id=440 lang=cpp
 *
 * [440] 字典序的第K小数字
 *
 * https://leetcode-cn.com/problems/k-th-smallest-in-lexicographical-order/description/
 *
 * algorithms
 * Hard (32.62%)
 * Likes:    84
 * Dislikes: 0
 * Total Accepted:    3.6K
 * Total Submissions: 11.1K
 * Testcase Example:  '13\n2'
 *
 * 给定整数 n 和 k，找到 1 到 n 中字典序第 k 小的数字。
 * 
 * 注意：1 ≤ k ≤ n ≤ 10^9。
 * 
 * 示例 :
 * 
 * 
 * 输入:
 * n: 13   k: 2
 * 
 * 输出:
 * 10
 * 
 * 解释:
 * 字典序的排列是 [1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9]，所以第二小的数字是 10。
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    /*
    所谓字典序问题，就是10叉树问题
    1-9为根节点的十叉树，从左向右排开就是字典序
    求第k小的数 K，就是找K在这9棵树的哪个位置
    也就是从1开始，一个一个向下向后数，数到第k个
    */
    int findKthNumber(int n, int k) {
        int p = 1;//指向当前位置，当p==k时候,也就是找到排在第k位的数
        int prefix = 1;//前缀从1开始
        while(p<k){//找到为止
            int count = 0;
        }
    }
    //prefix是前缀，n是上界
    int getCount(int prefix,int n){
        /*
        前缀树(字典排序树)的特点
        1、下层是上层数量的10倍
        2、下层起点是上层起点数值的10倍
        */
        int cur = 10;//从第一层第一个数开始
        int count = 1;
        while(cur<=n){
            count += cur;//加上当前行的数量
            cur *= 10;
        }
        count += (n-cur/10+1);
        // for(int cur=prefix,next=prefix+1;cur<=n;cur*=10,next*=10){
        //     int tmp = next < n+1 ? next : n+1;
        //     count += tmp-cur;
        // }
        return count;
    }
};
// @lc code=end

