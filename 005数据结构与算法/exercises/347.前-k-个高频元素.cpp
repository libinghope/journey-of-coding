/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 *
 * https://leetcode-cn.com/problems/top-k-frequent-elements/description/
 *
 * algorithms
 * Medium (60.94%)
 * Likes:    313
 * Dislikes: 0
 * Total Accepted:    48.9K
 * Total Submissions: 80.1K
 * Testcase Example:  '[1,1,1,2,2,3]\n2'
 *
 * 给定一个非空的整数数组，返回其中出现频率前 k 高的元素。
 * 
 * 示例 1:
 * 
 * 输入: nums = [1,1,1,2,2,3], k = 2
 * 输出: [1,2]
 * 
 * 
 * 示例 2:
 * 
 * 输入: nums = [1], k = 1
 * 输出: [1]
 * 
 * 说明：
 * 
 * 
 * 你可以假设给定的 k 总是合理的，且 1 ≤ k ≤ 数组中不相同的元素的个数。
 * 你的算法的时间复杂度必须优于 O(n log n) , n 是数组的大小。
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    /*时间复杂度要求优于nlog(n)
    直接用排序算法肯定不行了，哪怕快排也只能等于nlog(n)
    
    首先用hashtable保存n和n的频次 map[n]=(n的频次) O(n)=n

    然后用生成的hashtable构造最大堆(大顶堆)时间复杂度为 log(n)

    两者合起来O(n)=n 满足题意要求
    */
    vector<int> topKFrequent(vector<int>& nums, int k) {

    }
};
// @lc code=end

