#include "../crio/cpp/ds/ListNode/ListNode.hpp"
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
ListNode* reverseLinkedList(ListNode *head) {

	if(head == NULL)
		{
			return NULL;
		}
	ListNode *current = head;
	ListNode *prev = NULL;
	ListNode *next = head->next;

	

	while(next != NULL)
	{	
		if(current->next != NULL)
		{
			next = current->next;
		}
		else
		{
			next = NULL;
		}

		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}
