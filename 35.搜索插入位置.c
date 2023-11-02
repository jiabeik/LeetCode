/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

int searchInsert(int* nums, int numsSize, int target)//二分查找
{
    int l=0,r=numsSize-1;//最左值和最右值
    while(l<=r)
    {
        int m=(l+r)/2;//中间值
        if(nums[m]==target)
        {
            return m;
        }
        else if(nums[m]>target)
        {
            r=m-1;//范围减半
        }
        else if(nums[m]<target)
        {
            l=m+1;//范围减半
        }

    }
    return l;
}
// @lc code=end

