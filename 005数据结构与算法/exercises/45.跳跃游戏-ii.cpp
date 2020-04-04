/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 *
 * https://leetcode-cn.com/problems/jump-game-ii/description/
 *
 * algorithms
 * Hard (33.44%)
 * Likes:    409
 * Dislikes: 0
 * Total Accepted:    37.3K
 * Total Submissions: 111.1K
 * Testcase Example:  '[2,3,1,1,4]'
 *
 * 给定一个非负整数数组，你最初位于数组的第一个位置。
 * 
 * 数组中的每个元素代表你在该位置可以跳跃的最大长度。
 * 
 * 你的目标是使用最少的跳跃次数到达数组的最后一个位置。
 * 
 * 示例:
 * 
 * 输入: [2,3,1,1,4]
 * 输出: 2
 * 解释: 跳到最后一个位置的最小跳跃数是 2。
 * 从下标为 0 跳到下标为 1 的位置，跳 1 步，然后跳 3 步到达数组的最后一个位置。
 * 
 * 
 * 说明:
 * 
 * 假设你总是可以到达数组的最后一个位置。
 * 
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    //贪心算法，每次尽可能跳的更远，直到能够跳到最后一个点
    int jump(vector<int>& nums){
    int ans = 0;
    int end = 0;
    int maxPos = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        maxPos = max(nums[i] + i, maxPos);
        if (i == end)
        {
            end = maxPos;
            ans++;
        }
    }
    return ans;
    }
    /*
    分析，本质可以看做是一个有向带权图，从第0个到len-1节点的最短路径
    这题的特殊之处在于每条边的权重都是1
    这就转化成了，单源最短路径问题 nums[0]->nums[len-1]

    可以采用迪杰斯特拉算法或者弗洛伊德算法，此处只计算从0点开始最短路径，
    所以采用迪杰斯特拉算法(类似广度优先)更合适
    */
    int jump1(vector<int>& nums) {
        int len = nums.size();
        //定义邻接矩阵，并全部初始化为-1(表示不连通)
        vector<vector<int> > matrix(len-1,vector<int>(len-1,-1));
        int p[] = new int[len]{-1};//p[i]代表0到i的最短路径长度

        //根据数组填充邻接矩阵
        for(int i=0;i<len;++i){
            for(int j=1;j<=nums[i];++j){
                matrix[i][i+j] = 1;
            }
        }
        dijkstra(matrix,0,p);
        int ret = p[len-1];
        delete[] p;
        p = NULL;
        return ret;
    }

    void dijkstra(vector<vector<int> >&matrix,int v0, int *P){

    }
};
// @lc code=end

