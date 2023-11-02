/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
int lengthOfLastWord(char * s)
{
    int i = strlen(s)-1;//从后往前遍历
    int j = 0;
    while(i>=0)
    {
        if(s[i]!=' ')//不为空格，计数加1
        {
            j++;
        }
        if(s[i]==' '&& j!=0)//为空格且不是最后的空格，返回计数
        {
            return j;
        }
        i--;
    }
    return j;
}
// @lc code=end

