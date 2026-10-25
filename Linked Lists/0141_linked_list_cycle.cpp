/**
 * struct ListNode { int val; ListNode *next; ListNode(int x) : val(x), next(nullptr) {} };
 */
class Solution { public: bool hasCycle(ListNode* head) { auto s=head; auto f=head; while(f&&f->next){s=s->next;f=f->next->next;if(s==f)return true;}return false;} };
