/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         int c=1;
        ListNode* itr=head;
        while(itr)
        {
            itr=itr->next;
            c++;
        }
        ListNode* itr2=head;
        int half=c/2;
        
        while(c!=half+1)
        {
            itr2=itr2->next;
            c--;
        }
        return itr2;
        
    }
};