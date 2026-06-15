class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count=0;
        ListNode *temp=head;

        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count-=n;
        if(count==0)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *curr=head;
        ListNode *pre=NULL;
        while(count--)
        {
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        delete curr;
        return head;

        
    }
};
