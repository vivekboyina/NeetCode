class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode* cc = head;
        while(cc != nullptr)
        {
            st.push(cc);
            cc = cc -> next;
        }
        int n = (st.size() + 1)/2;
        cc = head;
        ListNode* tmp;
        while(n > 0)
        {
            tmp = cc -> next;
            cc -> next = st.top();
            cc = cc -> next;
            cc -> next = tmp;
            st.pop();
            n-=1;
            if(n > 0) cc = cc -> next;
            else cc -> next = nullptr;
            
        }
    }
};
