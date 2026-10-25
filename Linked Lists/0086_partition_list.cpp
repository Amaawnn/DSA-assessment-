/**
 * struct ListNode { int val; ListNode *next; ListNode() : val(0), next(nullptr) {} ListNode(int x) : val(x), next(nullptr) {} ListNode(int x, ListNode *next) : val(x), next(next) {} };
 */
class Solution { public: ListNode* partition(ListNode* head,int x) { ListNode a,b,*l=&a,*r=&b; while(head){auto n=head->next;head->next=nullptr;if(head->val<x){l->next=head;l=head;}else{r->next=head;r=head;}head=n;}l->next=b.next;return a.next;} };
