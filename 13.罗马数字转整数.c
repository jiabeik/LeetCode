/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start


int romanToInt(char * s)
{
    int arr[26];
    arr['I'-'A']=1;
    arr['V'-'A']=5;
    arr['X'-'A']=10;
    arr['L'-'A']=50;
    arr['C'-'A']=100;
    arr['D'-'A']=500;
    arr['M'-'A']=1000;
    //通过ASCⅡ码值进行字符的转换
    int temp = 0;
    int i = 0;
    for(i = 0;i<strlen(s);i++)
    {
        if(i<strlen(s)-1&&arr[s[i]-'A']<arr[s[i+1]-'A'])//比较左右两个数的大小
        {
            temp-=arr[s[i]-'A'];//左小于右，相减，如 IV
        }
        else
        {
            temp+=arr[s[i]-'A'];//左大于右或左右相等，相加，如 VI，II
        }
    }
    return temp;
}
// @lc code=end

