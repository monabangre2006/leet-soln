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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* t1=list1;
     ListNode* t2=list2;
     ListNode* dummyNode = new ListNode(-1);
     ListNode* res =dummyNode;
     while(t1!=nullptr && t2!=nullptr)
     {
         if(t1->val < t2->val)
         {
             ListNode* newNode = new ListNode(t1->val);
             res->next=newNode;
             res=newNode;
             t1=t1->next;
         }
          else 
          {
            ListNode* newNode = new ListNode(t2->val);
             res->next=newNode;
             res=newNode;
             t2=t2->next;
          }
     }
     while(t1)
     {
         ListNode* newNode = new ListNode(t1->val);
             res->next=newNode;
              res=newNode;
             t1=t1->next;
     }
     while(t2)
     {
        ListNode* newNode = new ListNode(t2->val);
             res->next=newNode;
             res=newNode;
             t2=t2->next;
     }

     return dummyNode->next;

    }
};