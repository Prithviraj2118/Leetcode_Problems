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
    
    // Middle of the LL
    ListNode* middle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    //Reverse the next half of LL
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

    
    void reorderList(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* temp = dummyNode;
        
        ListNode* mid = middle(head);
        ListNode* last = reverseList(mid->next);
        mid->next = NULL;
        
        while(head!=NULL)
        {
            temp->next = head;
            temp = temp->next;
            head = head->next;
            
            if(last!=NULL)
            {
                temp->next = last;
                temp = temp->next; 
                last = last->next;
            }
        }
    }
};