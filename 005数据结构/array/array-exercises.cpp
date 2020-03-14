/*
字母异位词: 判断t是否是s的异位词
示例例1输⼊入: s = "anagram", t = "nagaram"
输出: true示例例 2
输入: s = "rat", t = "car"
输出: false
提示:假设s,t中只有小写字母
*/
#include <stdlib.h>
#include <string>
bool dystopy(char *s, char *t)
{
    const int CHAR_NUM = 26;
    char sNum[CHAR_NUM] = {0};
    char tNum[CHAR_NUM] = {0};

    if (strlen(s) != strlen(t))
    {
        return false;
    }
    //两个单词长度相等,遍历两个数组
    for (int j = 0; j < strlen(s); j++)
    {
        sNum[int(s[j])]++;
        tNum[int(t[j])]++;
    }
    //比较字符出现的次数是否相等
    for (int k = 0; k < CHAR_NUM; k++)
    {
        if (sNum[k] != tNum[k])
            return false;
    }
    return true;
}
