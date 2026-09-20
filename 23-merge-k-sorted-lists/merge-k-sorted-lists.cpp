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
class Solution {
public:
    ListNode* mergeLists(ListNode* l1,ListNode* l2)
    {
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                ans->next=l1;
                l1=l1->next;
            }
            else
            {
                ans->next=l2;
                l2=l2->next;
            }
            ans=ans->next;
        }
        if(l1)
        {
            ans->next=l1;
        }
        if(l2)
        {
            ans->next=l2;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        while(lists.size()>1)
        {
            vector<ListNode*>temp;
            for(int i=0;i<lists.size();i+=2)
            {
                ListNode* l1=lists[i];
                ListNode* l2=i+1>=lists.size()?NULL:lists[i+1];
                temp.push_back(mergeLists(l1,l2));
            }
            lists=temp;
        }
        return lists.empty()?NULL:lists[0];
    }
};