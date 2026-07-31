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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>arr;
        
        while(temp!=nullptr)
        {
             arr.push_back(temp->val);
             
             temp=temp->next;
        }
       int n=arr.size();
       int temp1;
       temp1=arr[k-1];
       arr[k-1]=arr[n-k];
       arr[n-k]=temp1;
       int j=0;
       temp=head;
       while(temp!=nullptr)
       {
        temp->val= arr[j];
        j++;
        temp=temp->next;
       }
       return head;
    }
};