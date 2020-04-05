/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 *
 * https://leetcode-cn.com/problems/permutations-ii/description/
 *
 * algorithms
 * Medium (57.37%)
 * Likes:    256
 * Dislikes: 0
 * Total Accepted:    48.7K
 * Total Submissions: 84.2K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个可包含重复数字的序列，返回所有不重复的全排列。
 * 
 * 示例:
 * 
 * 输入: [1,1,2]
 * 输出:
 * [
 * ⁠ [1,1,2],
 * ⁠ [1,2,1],
 * ⁠ [2,1,1]
 * ]
 * 
 */

// @lc code=start
class Solution {
public:
    /*在前面的基础上，这次多了重复数字
    去重的方法，首先将数组排序
    sort(nums.begin(),nums.end());
    然后for循环当中增加条件判断
    if(i>0 && nums[i]==nums[i-1] && !used[i-1]) continue;
    */

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
    }
};
// @lc code=end

