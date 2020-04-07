/*
 * @lc app=leetcode.cn id=85 lang=cpp
 *
 * [85] 最大矩形
 *
 * https://leetcode-cn.com/problems/maximal-rectangle/description/
 *
 * algorithms
 * Hard (44.80%)
 * Likes:    373
 * Dislikes: 0
 * Total Accepted:    23.4K
 * Total Submissions: 51.8K
 * Testcase Example:  '[["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]'
 *
 * 给定一个仅包含 0 和 1 的二维二进制矩阵，找出只包含 1 的最大矩形，并返回其面积。
 * 
 * 示例:
 * 
 * 输入:
 * [
 * ⁠ ["1","0","1","0","0"],
 * ⁠ ["1","0","1","1","1"],
 * ⁠ ["1","1","1","1","1"],
 * ⁠ ["1","0","0","1","0"]
 * ]
 * 输出: 6
 * 
 */

// @lc code=start
class Solution {
public:
    /*
    这道题可以转化成上一道题的模式

    对每一行的下边沿作为x轴，第一列作为y轴，计算该行的maxRec
    
    针对每一行中的每一个元素的高度等于，从该行向上找到第一个不为
    1的位置，就是高度
    */
    int maximalRectangle(vector<vector<char>>& matrix) {
        
    }
};
// @lc code=end

