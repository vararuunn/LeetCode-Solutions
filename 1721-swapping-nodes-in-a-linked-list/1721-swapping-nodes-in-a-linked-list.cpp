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
    int len(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }

    ListNode* swapNodes(ListNode* head, int k) {
    ListNode* temp=head;
    int k1=len(head)-k+1;
    int c1=0;
    while(temp!=NULL){
        c1++;
        if(c1==k){
            ListNode* ptr=temp;
            temp=head;
            int c2=0;
            while(temp!=NULL){
                c2++;
                if(c2==k1){
                    int t=temp->val;
                    temp->val=ptr->val;
                    ptr->val=t;
                    break;
                }
                else
                    temp=temp->next;
            }
        }
        else
            temp=temp->next;
    }
    return head;
}
    
};