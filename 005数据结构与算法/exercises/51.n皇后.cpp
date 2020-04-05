/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N皇后
 *
 * https://leetcode-cn.com/problems/n-queens/description/
 *
 * algorithms
 * Hard (68.31%)
 * Likes:    367
 * Dislikes: 0
 * Total Accepted:    33.5K
 * Total Submissions: 48.7K
 * Testcase Example:  '4'
 *
 * n 皇后问题研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。
 * 
 * 
 * 
 * 上图为 8 皇后问题的一种解法。
 * 
 * 给定一个整数 n，返回所有不同的 n 皇后问题的解决方案。
 * 
 * 每一种解法包含一个明确的 n 皇后问题的棋子放置方案，该方案中 'Q' 和 '.' 分别代表了皇后和空位。
 * 
 * 示例:
 * 
 * 输入: 4
 * 输出: [
 * ⁠[".Q..",  // 解法 1
 * ⁠ "...Q",
 * ⁠ "Q...",
 * ⁠ "..Q."],
 * 
 * ⁠["..Q.",  // 解法 2
 * ⁠ "Q...",
 * ⁠ "...Q",
 * ⁠ ".Q.."]
 * ]
 * 解释: 4 皇后问题存在两个不同的解法。
 * 
 * 
 */
#include<vector>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    /*n皇后问题，典型的递归算法
    DFS
    */
    vector<vector<string>> solveNQueens(int n) {
        bool * used = new bool[n]{false};
        vector<string> vec_str;
        DFS(n,0,used,vec_str);
        delete[] used;
        return ret;
    }
    void DFS(int n,int row, bool used[],vector<string> vec_str){
        if(row >= n)
        {
            ret.push_back(vec_str);
            return;
        }
        string str(n,'.');
        for(int i=0;i<n;++i){
            
            if(!used[i]){
                used[i] = true;
                str[i] = 'Q';
            }
        }
        vec_str.push_back(str);
        DFS(n,row+1,used,vec_str);
    }
    private:
    vector<vector<string> >  ret;
};
// @lc code=end

