
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int node_remove = (length(head)-n)+1;
    if (node_remove == 1) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* temp=head;
        ListNode*prev=NULL;
        int cnt=0;
        while(temp!=NULL ){
            cnt=cnt+1;
            if(cnt==node_remove){
                
                ListNode* front=temp->next;
                prev->next=front;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
            
        }
        return head;


    }
    int length(ListNode* head){
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c=c+1;
            temp=temp->next;
        }
        return c;
    }
};