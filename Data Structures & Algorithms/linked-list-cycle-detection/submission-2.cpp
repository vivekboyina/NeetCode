class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* rab = head;
        ListNode* tor = head;
        while(rab != nullptr && tor != nullptr)
        {
            if(rab -> next != nullptr && rab -> next -> next != nullptr) rab = rab -> next -> next;
            else return false;
            tor = tor -> next;
            if(rab != nullptr && tor != nullptr && rab -> val == tor -> val) return true;   
        }
        return false;
    }
};
