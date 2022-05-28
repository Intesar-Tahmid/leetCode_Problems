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
     vector<int>vavy;
    bool isPalindrome(ListNode* head) {
       
        if(head == NULL)
        {
            return false;
        }
        //int count = 1; 
        ListNode *p = head;
        while(p!=NULL)
        {
            //count++;
            vavy.push_back(p->val);
            p=p->next;
        }
        
        int check = 1;
        int size = vavy.size();
        for(int i = 0; i<=size/2; i++)
        {
            if(vavy[i] != vavy[size-i-1])
            {
                check = 0;
            }
        }
        
        if(check == 0)
            return false;
       // else if(check==1)
      //  {
             return true;
      //  }
    }
};