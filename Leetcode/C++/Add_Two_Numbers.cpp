/**
 * Problem Link:- https://leetcode.com/problems/add-two-numbers/description/
 * **/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *ans = dummy;
        int c = 0, c1 = 0;

        while (l1 || l2 || c)
        {
            int p = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + c;
            c = p / 10;
            c1++;
            dummy->next = new ListNode(p % 10);
            dummy = dummy->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        cout << c1 << endl;
        return ans->next;
    }
};