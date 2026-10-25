/**
 * struct ListNode { int val; ListNode *next; ListNode() : val(0), next(nullptr) {} ListNode(int x) : val(x), next(nullptr) {} ListNode(int x, ListNode *next) : val(x), next(next) {} };
 */
class Solution { public: ListNode* reverseKGroup(ListNode* head,int k) { ListNode d(0,head),*gp=&d; while(true){auto kth=gp;for(int i=0;i<k&&kth;++i)kth=kth->next;if(!kth)break;auto end=kth->next;auto prev=end;auto cur=gp->next;while(cur!=end){auto next=cur->next;cur->next=prev;prev=cur;cur=next;}auto first=gp->next;gp->next=kth;gp=first;}return d.next;} };
