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

bool detectAndRemoveCycle(ListNode* head){
    unordered_set<ListNode*> s;
    ListNode* prev = head;
    while (head != NULL) {
     
        if (s.find(head) != s.end())
           {
                prev->next = NULL;
                return true;
           } 
        s.insert(head);
        prev = head;
        head = head->next;
    }
 
    return false;
}
