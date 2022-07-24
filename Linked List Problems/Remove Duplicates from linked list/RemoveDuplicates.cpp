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
#include <unordered_set>
#include "../crio/cpp/ds/ListNode/ListNode.hpp"



ListNode* removeDups(ListNode* head)
{


	unordered_set<int> seen;
 
    /* Pick elements one by one */
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    while (curr != NULL) {
        // If current value is seen before
        if (seen.find(curr->val) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->val);
            prev = curr;
        }
        curr = prev->next;
    }

	return head;
}
