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
    ListNode* mergeInBetween(ListNode* head1, int a, int b, ListNode* head2) {
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        ListNode* p = head1;
        
        int count = 0;
        
        while(count!=b+1 && p!=NULL)
        {
            p = p->next;
            count++;
        }
        
        count = 0;
        while(count!=a-1 && temp1!=NULL)
        {
            temp1 = temp1->next;
            count++;
        }
        
        temp1->next = temp2;
        
        while(temp2->next!=NULL)
        {
            temp2 = temp2->next;
        }
        
        temp2->next = p;
        
        return head1;
    }
};