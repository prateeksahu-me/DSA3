
/*
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

ListNode* oddEvenLinkedList(ListNode* head){

	 if (head == NULL)
        return NULL;
 
    // Initialize first nodes of even and
    // odd lists
    ListNode *odd = head;
    ListNode *even = head->next;
 
    // Remember the first node of even list so
    // that we can connect the even list at the
    // end of odd list.
    ListNode *evenFirst = even;
 
    while (1)
    {
        // If there are no more nodes, then connect
        // first node of even list to the last node
        // of odd list
        if (!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }
 
        // Connecting odd nodes
        odd->next = even->next;
        odd = even->next;
 
        // If there are NO more even nodes after
        // current odd.
        if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenFirst;
            break;
        }
 
        // Connecting even nodes
        even->next = odd->next;
        even = odd->next;
    }
 
    return head;
}