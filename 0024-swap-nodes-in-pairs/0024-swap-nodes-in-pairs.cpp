/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    ListNode* swapPairs(ListNode* head)
    {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode* t1=head;
    ListNode* t2=head->next;
    ListNode* dummy =new ListNode(-1);
    ListNode* t=dummy;
    while(t2!=NULL && t2->next!=NULL){
        ListNode* temp=t2->next;
        t->next=t2;
        t2->next=t1;
        t=t->next->next;
        t1=temp;
        t2=temp->next;
    }
    if(t2==NULL){
        t->next=t1;
        t1->next=NULL;
        return (dummy->next);
    }
    else{
        t->next=t2;
        t2->next=t1;
        t1->next=NULL;
        return (dummy->next);
    }
    }
};