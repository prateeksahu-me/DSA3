#include "../crio/cpp/ds/ListNode/ListNode.hpp"
/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode* next;
 *   ListNode(int x) { val = x, next(NULL)}
 * }
 */

class SortList {
  public:
    ListNode *mergeSort(ListNode *head) {
      if(!head || !head->next) return head;
      ListNode *slow = head, *fast = head->next; 
      while(fast && fast->next) {
          slow = slow->next;
          fast = fast->next->next;
      }
      ListNode *left = head, *right = slow->next;
      slow->next = NULL;
      left = mergeSort(left);
      right = mergeSort(right);
      return merge(left, right);
    }

    ListNode *merge(ListNode *L, ListNode *R) {
        if(!L) return R;
        if(!R) return L;
        ListNode *h = NULL;
        if(L->val < R->val) {
            h = L;
            h->next = merge(L->next, R);
        } else {
            h = R;
            h->next = merge(L, R->next);
        }
        return h;
    }


    ListNode* sortList(ListNode* head) {
        ListNode *result = NULL;
        return mergeSort(head);
    }
};
