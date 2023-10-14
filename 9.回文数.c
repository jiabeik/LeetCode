/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
#include<stdbool.h>

bool isPalindrome(int x)
{
    long long temp = 0;//需要足够大小的储存空间
    int a = x;
    if(a<0)//负数不成立
    {
        return false;
    }
    while(a)
    {
        temp=(a%10)/*保留个位*/+temp*10;//每次后一位位数字向前走一位，个位逐次成为最高位，最高位成为个位
        a/=10;//去掉个位，逐次剩余最高位
    }
    if(x==temp)//判断原数与换位后的数是否相同
    {
        return true;
    }
    else
    {
        return false;
    }
}
// @lc code=end

