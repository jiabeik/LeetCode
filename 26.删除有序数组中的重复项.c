/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize)//双指针
{
    if(numsSize == 0)
    {
        return 0;
    }
    int f = 1;//first指针
    int l = 1;//last指针
    while(f<numsSize)
    {
        if(nums[f]!=nums[f-1])//first指针依次选出与前一项不同的元素
        {
            nums[l]=nums[f];//赋值
            l++;//确定下一个元素
        }
        f++;
    }
    return l;
}
// @lc code=end

