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
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        k=k%len(head);
        int k1=len(head)-k;
        if(k1==len(head)){
            return head;
        }
        ListNode* temp=head;
        while(k1>1){
            temp=temp->next;
            k1--;
        }
        ListNode* ptr=temp->next;
        temp->next=NULL;
        ListNode* newHEAD=ptr;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=head;
        return newHEAD;
    }
};