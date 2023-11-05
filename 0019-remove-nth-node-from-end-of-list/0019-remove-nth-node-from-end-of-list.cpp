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
    int number_of_nodes(ListNode* head)
    {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void delete_nth_node_from_beginning(ListNode* &head, int k)
{
    ListNode* temp=head;
    if (temp->next == NULL) {
        head=NULL;
        return;
    }
    if(k==1)
    {
        head=head->next;
        return;
    }
    ListNode* prev=NULL;
    int n=1;
    while(n<k)
    {
        prev=temp;
        temp=temp->next;
        n++;
    }
    prev->next=temp->next;
    delete temp;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a=number_of_nodes(head);
        if(n==a)
        delete_nth_node_from_beginning(head, 1);
        else
        {
            int b=a-n+1;
            delete_nth_node_from_beginning(head, b);
        }
        return head;
    }
};