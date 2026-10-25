/**
 * struct ListNode { int val; ListNode *next; ListNode() : val(0), next(nullptr) {} ListNode(int x) : val(x), next(nullptr) {} ListNode(int x, ListNode *next) : val(x), next(next) {} };
 */
class Solution { public: ListNode* removeNthFromEnd(ListNode* head,int n) { ListNode d(0,head),*f=&d,*s=&d; for(int i=0;i<n;++i) f=f->next; while(f->next){f=f->next;s=s->next;} ListNode* r=s->next; s->next=r->next; delete r; return d.next; } };
