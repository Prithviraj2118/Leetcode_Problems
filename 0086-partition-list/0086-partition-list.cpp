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
    ListNode* partition(ListNode* head, int x) {
        //dummyNode
        ListNode* dummyNode1 = new ListNode(0);
        ListNode* dummyNode2 = new ListNode(0);
        ListNode* ptr1 = dummyNode1;
        ListNode* ptr2 = dummyNode2;
        
        while(head!=NULL){
            if(head->val<x){
                ptr1->next=head;
                ptr1=head;
            }
            else if(head->val>=x){
                ptr2->next=head;
                ptr2=head;
            }
            head = head->next;
        }
        ptr1->next=dummyNode2->next;
        ptr2->next=NULL;
        
        return dummyNode1->next;
    }
};

    

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
        
//         //Create 2 dummyNodes 
//         ListNode* dummyNode1 = new ListNode(0);
//         ListNode* dummyNode2 = new ListNode(0);
//         ListNode* ptr1 = dummyNode1;
//         ListNode* ptr2 = dummyNode2;
        
//         while(head!=NULL)
//         {
//             if(head->val < x)
//             {
//                 ptr1->next = head;
//                 ptr1 = ptr1->next;
//             }

//             else
//             {
//                 ptr2->next = head;
//                 ptr2 = ptr2->next;
//             }
            
//             head = head->next;
//         }
        
//         ptr2->next = NULL;
        
//         ptr1->next = dummyNode2->next;
//         return dummyNode1->next;
//     }
// };