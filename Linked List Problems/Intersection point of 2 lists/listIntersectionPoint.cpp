/*
// Definition for ListNode
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode() {}
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
*/
ListNode* listIntersectionPoint(ListNode* head1, ListNode* head2) {

    if(head1 == NULL || head2 == NULL)
    {
        return NULL;
    }

    ListNode *h1 = head1,*h2 = head2;

    int count1 = 0, count2 = 0;

    while(h1 != NULL)
    {
        count1++;
        h1 = h1->next;
    }

    while(h2 != NULL)
    {
        count2++;
        h2 = h2->next;
    }

    h1 = head1;
    h2 = head2;
    if(count1>count2)
    {
        
        for(int i = 0; i <(count1-count2);i++)
        {
           h1 = h1->next;
        }
    }
    else if(count2>count1)
    {
        for(int i = 0; i < (count2-count1);i++)
        {
            h2 = h2->next;
        }        

    }


    while(h1!=NULL)
    {
        //cout<<"h1 "<<h1->val<<" h2 "<<h2->val<<endl;
        if(h1 == h2)
        {
            //cout<<"Hit1";
            return h1;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    
    return NULL;
}