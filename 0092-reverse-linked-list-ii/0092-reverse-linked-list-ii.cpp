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

ListNode* revList(ListNode* p1, ListNode* p2){
    ListNode* prev=NULL;
    ListNode* cur=p1;
    ListNode* next;
        
    while(prev != p2){
        next = cur->next;
        cur->next=prev;
            
        prev=cur;
        cur=next;
    }
    return cur;
}

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if(head->next==NULL) return head;
        if(l==r) return head;
        
        ListNode* p1=head;
        ListNode* p2=head;
        ListNode* dummyNode = new ListNode(0);
        ListNode* a;
        int cnt=1;
        cout << p1->val;
        if(l==1){
            p1 = head;
            a=dummyNode;
        }
        
        else{
            while(cnt<l-1){
                p1 = p1->next;
                p2 = p2->next;
                cnt++;
            }
            a=p1;
            p1=p1->next;
        }
        
        while(cnt<r){
            p2=p2->next;
            cnt++;
        }
        
        ListNode* current = revList(p1, p2);
        
        a->next = p2;
        p1->next=current;
        
        if(a==dummyNode) return a->next;
        return head;
    }
};