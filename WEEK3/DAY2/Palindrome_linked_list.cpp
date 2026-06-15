class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
        return 1;

        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;

        }
        count/=2;
        ListNode *curr=head;
        ListNode *pre=NULL;
        while(count--)
        {
            pre=curr;
            curr=curr->next;

        }
        
        ListNode *front=NULL;
       pre->next=NULL;
        pre=NULL;
        while(curr)
        {
            front=curr->next;
            curr->next=pre;
            pre=curr;
            curr=front;
        }
        ListNode *head1=head;
        ListNode *head2=pre;
        while(head1!=NULL)
        {
            if(head1->val!=head2->val)
            return 0;
            head1=head1->next;
            head2=head2->next;

        }
        return 1;
        
    }
};
