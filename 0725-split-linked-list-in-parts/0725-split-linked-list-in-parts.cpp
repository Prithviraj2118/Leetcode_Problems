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
        if(head == NULL)
            return 0;
        
        ListNode* temp = head;
        int cnt = 0;
        
        while(temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        
        return cnt;
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> ans;
        
        int l = length(head);
        int v1 = l/k;
        int v2 = l%k;
        int cnt;
        
        ListNode* head1 = head;
        ListNode* temp = head;
        ListNode* temp1;
        
        if(k>l){
            while(temp!=NULL){
                ans.push_back(temp);
                temp1=temp->next;
                temp->next=NULL;
                temp=temp1;
            }
            
            int p = k-l;
            while(p--){
                ans.push_back(NULL);
            }
            return ans;
        }
        
        else{
            
            while(v2 --){
                cnt=1;
                while(cnt != v1+1){
                    temp = temp->next;
                    cnt++;
                }
                temp1 = temp->next;
                temp->next=NULL;
                temp=temp1;
                ans.push_back(head1);
                head1 = temp1;
            }

            v2 = l%k;
            k=k-v2;
            cout << k << " " << v2;
            while(k--){
                cnt=1;
                while(cnt != v1){
                    temp = temp->next;
                    cnt++;
                }

                temp1 = temp->next;
                temp->next=NULL;
                temp=temp1;
                ans.push_back(head1);
                head1 = temp1;
            }
        }
//         ListNode* temp = head;
//         ListNode* temp2;
//         if(l < k)
//         {
//             while(temp != NULL)
//             {
//                 temp2 = temp->next;
//                 temp->next = NULL;
//                 ans.push_back(temp);
//                 temp = temp2;
//             }
            
//             for(int i=0; i<(k-l); i++)
//             {
//                 ans.push_back(NULL);
//             }
//         }
        
//         if(l==k)
//         {
//             while(temp != NULL)
//             {
//                 temp2 = temp->next;
//                 temp->next = NULL;
//                 ans.push_back(temp);
//                 temp = temp2;
//             }
//         }
        return ans;
    }
};