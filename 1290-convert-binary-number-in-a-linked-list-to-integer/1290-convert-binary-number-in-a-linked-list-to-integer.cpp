/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *nexty = NULL;
        
        while(head != NULL)
        {
            nexty = head->next;
            head->next = prev;
            prev = head;
            head = nexty;
        }
        
        head = prev;
        
        int count = 0;
        int c = 0;
        
        while(head!=NULL)
        {
            int k;
            k = head->val;
            count += k*pow(2, c);
            c++;
            head = head->next;
        }
        
        return count;
    }
};