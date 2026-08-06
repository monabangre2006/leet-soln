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
   ListNode* convertarrtoll(vector<int>arr)
   {
      if(arr.size()==0)
          return nullptr;
      ListNode* head = new ListNode(arr[0]);
      ListNode* mover =head;
      for(int i=1;i<arr.size();i++)
      {
         ListNode* temp=new ListNode(arr[i]);
         mover->next=temp;
         mover=temp;
      }

      return head;

   }
    ListNode* removeElements(ListNode* head, int val) {
       vector<int>arr;
       ListNode* temp=head;
       while(temp!=nullptr)
       {
          arr.push_back(temp->val);
          temp=temp->next;
       }
       arr.erase(remove(arr.begin(),arr.end(),val),arr.end());

       head=convertarrtoll(arr);
       return head;
       
    }

};