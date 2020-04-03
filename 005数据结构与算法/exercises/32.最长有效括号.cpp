/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 *
 * https://leetcode-cn.com/problems/longest-valid-parentheses/description/
 *
 * algorithms
 * Hard (29.86%)
 * Likes:    579
 * Dislikes: 0
 * Total Accepted:    49.3K
 * Total Submissions: 164.1K
 * Testcase Example:  '"(()"'
 *
 * 给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。
 * 
 * 示例 1:
 * 
 * 输入: "(()"
 * 输出: 2
 * 解释: 最长有效括号子串为 "()"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ")()())"
 * 输出: 4
 * 解释: 最长有效括号子串为 "()()"
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    /*思路：使用动态规划的方式求解

    动态规划的题目一般分成三步：
    1、确定状态dp数组，也就是你的答案表是存什么答案的。dp[],或者dp[][]
    2、确定状态转移方程(递推公式)，也就是怎么将你的答案表dp填满。通常dp[i]与dp[i-1]以及dp[i-2]有关系
    3、确定边界情况，什么情况下有可能越界，要单独判断考虑（有可能无边界情况）。

    这道题肯定是是dp[],一维数组
    确定状态, dp[i]表示以s[i]结尾的有效的字符串的长度
    关键就是如何确定递推公式了
    当s[i] == ‘)’时，
        1、如果s[i-1] == '(',也就是···()这种形式,很明显dp[i] = dp[i-2] + 2
        2、如果s[i-1] == ')',也就是···))这种形式,这种情况不好判断
            如果s[i-1]是有效括号的一部分，即dp[i-1]>0,此时将s分为三段
            s[0],s[1]···s[i-dp[i-1]-1],s[i-dp[i-1]]···s[i-1]=')',s[i]=')'
            关键看s[dp[i-1]-1]是不是'(',
            if s[i-dp[i-1]-1]=='(',s[i] = dp[i-1]+2+dp[i-dp[i-1]-2] 
            至此递推公式已经明了，不再赘述
        3、判断临界条件 要满足i-2>0,i-dp[i-1]-2>0,否则就长度就是0
        

    */
    int longestValidParentheses(string s) {
        
    }
};
// @lc code=end

