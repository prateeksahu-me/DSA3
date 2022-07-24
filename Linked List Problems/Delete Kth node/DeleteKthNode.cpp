#include "../crio/cpp/ds/ListNode/ListNode.hpp"
/*
Definition for ListNode
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
ListNode* deleteKthToLast(ListNode* head , int k) {

    int count = 1;
    if(head == NULL)
    {
        return head;
    }

    if(head->next == NULL)
    {
        return NULL;
    }
    ListNode *current = head;
    while(current->next != NULL)
    {   
        count++;
        current = current->next;
    }

    count = count - k; //0
    current = head; //1

    if(count == 0)
    {
        current = current->next;
        return current;
    }
    for(int i = 0; i <count-1;i++)
    {
        current = current->next;
    }
    current->next = current ->next->next;

    return head;
}
