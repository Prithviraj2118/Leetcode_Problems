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

ListNode* middle(ListNode* head)
{
    ListNode* fast = head;
    ListNode* slow = head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}

ListNode* reverseList(ListNode* head)
{
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* next;
    
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        
        prev = current;
        current = next;
    }
    return prev;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode* mid = middle(head);
        ListNode* last = reverseList(mid);
        ListNode* start = head;
        
        while(last!=NULL)
        {
            if(start->val!=last->val)
                return false;
            
            start=start->next;
            last = last->next; 
        }
        
        return true;
        
    }
};