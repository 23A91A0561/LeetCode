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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s;
        for(auto &i:nums)
        {
            s.insert(i);
        }
        while(s.find(head->val)!=s.end())
        {
            head=head->next;
        }
        auto temp=head;
        while(temp->next!=NULL)
        {
            if(s.find(temp->next->val)!=s.end())
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};