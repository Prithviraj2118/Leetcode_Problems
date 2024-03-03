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
    int length(ListNode* head)
     {
         ListNode* temp = head;
         int l = 0;

         while(temp != NULL)
         {
             temp = temp->next;
             l++;
         }

         return l;
     }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len = length(head);
        int cnt = 1;
        
        if(len==n) return head->next;
        
        while(cnt!=len-n){
            temp=temp->next;
            cnt++;
        }
        temp->next=temp->next->next;
        return head;
    }
};