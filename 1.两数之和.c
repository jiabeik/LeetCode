/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for(int i = 0;i<numsSize-1;i++)//依次遍历，获得两个数
    {
        for(int j = i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)//判断两数之和是否与所输入数相等
            {
                int *a=(int*)malloc(sizeof(int)*2);//为指针变量开辟一个大小为两个整型的储存空间
                a[0] = i;//将两个符合条件的数放入
                a[1] = j;
                *returnSize = 2;//改变数组长度，只有指针能改变函数以外的变量
                return a;
            }
        }
    }
    return 0;
}
// @lc code=end

