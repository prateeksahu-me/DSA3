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


ListNode* reverse( ListNode* head,  ListNode* prev)
{
	if (head == NULL)
        return NULL;
 
    ListNode* temp;
    ListNode* curr;
    curr = head;
    // Reversing nodes until curr node's value
    // turn odd or Linked list is fully traversed
    while (curr != NULL && curr->val % 2 == 0) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
 
    // If elements were reversed then head
    // pointer needs to be changed
    if (curr != head) {
 
        head->next = curr;
 
        // Recur for the remaining linked list
        curr = reverse(curr, NULL);
        return prev;
    }
 
    // Simply iterate over the odd value nodes
    else {
        head->next = reverse(head->next, head);
        return head;
    }


}

ListNode * reverseEvenElements(ListNode *head) {
	
	head = reverse(head, NULL);
	return head;
}
