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
    
    void InsertAtHead(ListNode* &head, int data)
    {
        ListNode* newnode= new ListNode(data);
        newnode->next=head;
        head=newnode;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp= new ListNode(head->val);
        head=head->next;
        while(head!=nullptr)
        {
            InsertAtHead(temp, head->val);
            head=head->next;
        }
        return temp;
        
    }
};