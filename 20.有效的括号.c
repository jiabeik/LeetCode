/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start
#include<stdbool.h>

char pairs(char a)//是右括号，返回左括号
{
    if (a == '}')
    {
        return '{';
    } 
    if (a == ']') 
    {
        return '[';
    }
    if (a == ')') 
    {
        return '(';
    }
    return 0;//是左括号，返回0，使左括号入栈
}

bool isValid(char * s)//先进后出————栈
{
    int a = strlen(s);
    if(a%2==1)//字符数量为奇数，则一定不匹配
    {
        return false;
    }
    int top = 0;//初始化栈顶
    int stk[a+1];//栈从0开始，栈的大小为数组长度+1
    for(int i = 0;i<a;i++)//从数组首元素开始判断是否入栈、出栈
    {
        int temp = pairs(s[i]);//判断元素为左括号还是右括号
        if(temp)//右括号，不入栈
        {
            if(top==0||stk[top-1]!=temp)//判断是否为空栈以及左右括号是否匹配
            {
                return false;
            }
            top--;//对应的左括号出栈，栈顶-1
        }
        else//左括号，入栈
        {
            stk[top++]=s[i];
        }
    }
    return top==0;//栈为空，说明栈中元素全部出栈
}
// @lc code=end

