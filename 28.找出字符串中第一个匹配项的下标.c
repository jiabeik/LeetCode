/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
int strStr(char* haystack, char* needle) 
{
    int n = strlen(haystack), m = strlen(needle);
    for (int i = 0; i + m <= n; i++)//i为相同字符串的第一个元素位置
    {
        int flag = 1;//判断条件，有一次元素不等就为1
        for (int j = 0; j < m; j++)
        {
            if (haystack[i + j] != needle[j])//判断元素是否相等
            {
                flag = 0;//元素连续不相等就为0
                break;
            }
        }
        if (flag) 
        {
            return i;
        }
    }
    return -1;
}

// @lc code=end

