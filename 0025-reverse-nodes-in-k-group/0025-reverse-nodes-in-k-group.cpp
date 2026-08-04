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
  ListNode* findknode(ListNode* temp,int k)
  {
     k-=1;
     while(temp!=nullptr && k>0)
     {
        k--;
        temp=temp->next;
     }
     return temp;
  }
  ListNode* reverse(ListNode* head)
  {
    ListNode*temp=head;
    ListNode* prev=nullptr;
    while(temp!=nullptr)
    {
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
  }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevnode=nullptr;
        
        while(temp!=nullptr)
        {
            ListNode* kthnode= findknode(temp,k);
            if(kthnode==nullptr)
            {
                if(prevnode)
                   prevnode->next=temp;
                break;
            }
            ListNode* nextnode = kthnode->next;
            kthnode->next=nullptr;
             reverse(temp);
            if(temp==head)
            {
                head=kthnode;
            }
            else
            {
                prevnode->next=kthnode;
            }

            prevnode=temp;
            temp=nextnode;

          
        }

        return head;
    }
};