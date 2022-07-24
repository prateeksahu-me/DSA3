#include "../crio/cpp/ds/ListNode/ListNode.hpp"

/*
The ListNode class is implemented as follows:
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

// Implement your Solution Here    
void deleteGivenNode(ListNode* node)
{
	node->val = node->next->val;
	node->next = node->next->next;
}
