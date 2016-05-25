/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head || !head->next)return head;
    struct ListNode *r=head,*e=head->next,*h[2]={r,e},*c=e->next;
    for(int i=0;c;c=c->next,i=1-i){
        h[i]->next=c;
        h[i]=c;
    }
    h[0]->next=e;
    h[1]->next=NULL;
    return r;
}