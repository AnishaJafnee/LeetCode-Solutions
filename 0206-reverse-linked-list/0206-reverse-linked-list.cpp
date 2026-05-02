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
    ListNode* reverseList(ListNode* head) {
        ListNode *i=head,*direction=NULL,*track=NULL;
        while(i!=NULL)
        {
            track=i->next;
            i->next=direction;
            direction=i;
            i=track;
        }
        return direction;
    }
};