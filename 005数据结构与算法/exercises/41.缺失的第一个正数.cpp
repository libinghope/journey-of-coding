/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 *
 * https://leetcode-cn.com/problems/first-missing-positive/description/
 *
 * algorithms
 * Hard (37.68%)
 * Likes:    450
 * Dislikes: 0
 * Total Accepted:    44.2K
 * Total Submissions: 116.8K
 * Testcase Example:  '[1,2,0]'
 *
 * 给你一个未排序的整数数组，请你找出其中没有出现的最小的正整数。
 * 
 * 
 * 
 * 示例 1:
 * 
 * 输入: [1,2,0]
 * 输出: 3
 * 
 * 
 * 示例 2:
 * 
 * 输入: [3,4,-1,1]
 * 输出: 2
 * 
 * 
 * 示例 3:
 * 
 * 输入: [7,8,9,11,12]
 * 输出: 1
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 你的算法的时间复杂度应为O(n)，并且只能使用常数级别的额外空间。
 * 
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    /*方法思路
    要求的解，必定位于[1，N+1],其中N为数组长度
    定义数组hash_tpl[N]={0},
    遍历数组，把n放在下标为n-1的位置(n<=0的抛弃掉)
    那么最终，hash_tpl中第一个等于0的位置就是要求的解
    */
    int firstMissingPositive(vector<int>& nums) {
        int first = 1;
        int cur_first = 1;
        int hash_tpl[] = new int[nums.size()]{0};
        for(int n : nums){
            if(n>0){
                hash_tpl[n-1] = n;
            }
        }
        //遍历hash_tpl找到第一个为0的数,很简单不再赘述
    }
};
// @lc code=end

