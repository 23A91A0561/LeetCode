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
    int pairSum(ListNode* head) {
        // vector<int>v;
        // while(head!=NULL)
        // {
        //     v.push_back(head->val);
        //     head=head->next;
        // }
        // int n=v.size();
        // int Max=INT_MIN;
        // for(int i=0;i<n/2;i++)
        // {
        //     Max=max(v[i]+v[n-1-i],Max);
        // }
        // return Max;
        int Max=0;
        int count=0;
        auto temp=head;
        stack<int>st;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int i=0;
        while(head!=NULL)
        {
            if(i<count/2)
            {
                st.push(head->val);
            }
            else
            {
                Max=max(Max,st.top()+head->val);
                st.pop();
            }
            head=head->next;
            i++;
        }
        return Max;
    }
};