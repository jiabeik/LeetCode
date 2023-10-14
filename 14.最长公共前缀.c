/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char * longestCommonPrefix(char ** strs, int strsSize)//两次解引用,对应数组中的字符串和字符串中的元素
{
    int i,j = 0;
    int len;
    len = strlen(strs[0]);
    for(i = 1;i<strsSize;i++)//strsSize为常数，循环从1开始；若是数组，则从0开始
    {
        if(len>strlen(strs[i]))//比较数组中所有字符串中长度，选出长度最短的
        {
            len = strlen(strs[i]);//公共部分的长度一定小于等于所有字符串中长度最短的
        }
    }
    for(j = 0;j<len;j++)//依次遍历每个字符串中的元素
    {
        for(i = 1;i<strsSize;i++)//依次遍历数组中的字符串
        {
            if(strs[i][j]!=strs[i-1][j])//判断每个字符串相同位置的元素是否相等
            {
                break;//存在两个字符串，第j个元素不相等，跳出循环
            }
        }
        if(i!=strsSize)//若遍历结束前已经存在相同位置元素不同的两个字符串，说明该位置一定不在公共范围内
        {
            break;
        }
    }
    //每个字符串前j-1个元素相同
    strs[0][j]='\0';//将第一个字符串的第j个元素改为‘\0’，字符串结束
    return strs[0];//打印的一个字符串，即为公共部分
}
// @lc code=end

