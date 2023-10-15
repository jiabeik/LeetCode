/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)//递归重复比较
{
    if(list1==NULL)//若链表为空，则返回另一个链表
    {
        return list2;
    }
    else if(list2==NULL)
    {
        return list1;
    }
    else if(list1->val<list2->val)//取出结构体中储存到链表中的元素
    {
        list1->next = mergeTwoLists(list1->next, list2); //q->next = p,将p放到q的下一个位置
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}
// @lc code=end

