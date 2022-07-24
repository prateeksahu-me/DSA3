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
#include "../crio/cpp/ds/ListNode/ListNode.hpp"

ListNode * moveMiddleToHead(ListNode * head) {
	
    
    if (head == NULL)
        return NULL;
    
    if (head->next == NULL)
        return head;
 

    // To traverse list nodes one by one
    ListNode* one_node = (head);
 
    // To traverse list nodes by skipping
    // one.
    ListNode* two_node = (head);
 
    // To keep track of previous of middle
    ListNode* prev = NULL;
    while (two_node != NULL && two_node->next != NULL)
    {
 
        /* for previous node of middle node */
        prev = one_node;
 
        /* move one node each time*/
        two_node = two_node->next->next;
 
        /* move two node each time*/
        one_node = one_node->next;
    }
 
    /* set middle node at head */
    prev->next = prev->next->next;
    one_node->next = (head);
    (head) = one_node;

	return head;

}