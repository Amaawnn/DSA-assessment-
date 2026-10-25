/**
 * struct ListNode { int val; ListNode *next; ListNode() : val(0), next(nullptr) {} ListNode(int x) : val(x), next(nullptr) {} ListNode(int x, ListNode *next) : val(x), next(next) {} };
 */
class Solution { public: ListNode* removeElements(ListNode* head,int val) { ListNode d(0,head),*p=&d; while(p->next){if(p->next->val==val){auto r=p->next;p->next=r->next;delete r;}else p=p->next;}return d.next;} };
