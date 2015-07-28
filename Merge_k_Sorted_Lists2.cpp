class Solution {
public:
    struct compNode {
        bool operator()(ListNode *p, ListNode *q) const {
            return p->val>q->val;
        }  
    };

    ListNode *mergeKLists(vector<ListNode *> &lists) {
        priority_queue<ListNode*, vector<ListNode*>, compNode> pq;
        ListNode *dummy = new ListNode(0), *tail = dummy;
        
        for(int i=0; i<lists.size(); i++) 
            if(lists[i]) pq.push(lists[i]);
            
        while(!pq.empty()) {
            tail->next = pq.top();
            tail = tail->next;
            pq.pop();
            if(tail->next) pq.push(tail->next);
        }
        
        return dummy->next;
    }
};
