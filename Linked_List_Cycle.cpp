class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL) return false;
        
        ListNode* first=head;
        ListNode* second=head->next;
        
        while(first!=NULL&&second!=NULL)
        {
            if(first==second) return true;
            first=first->next;
            second=second->next;
            
            if(second==NULL)
            {
                return false;
            }
            else
            {
                second=second->next;
            }
        }
        
        return false;
    }
};
