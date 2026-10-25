/**
 * struct ListNode { int val; ListNode *next; ListNode() : val(0), next(nullptr) {} ListNode(int x) : val(x), next(nullptr) {} ListNode(int x, ListNode *next) : val(x), next(next) {} };
 */
class Solution { public: bool isPalindrome(ListNode* head) { auto s=head;auto f=head;while(f&&f->next){s=s->next;f=f->next->next;}ListNode* prev=nullptr;while(s){auto n=s->next;s->next=prev;prev=s;s=n;}auto l=head;auto r=prev;while(r){if(l->val!=r->val)return false;l=l->next;r=r->next;}return true;} };
