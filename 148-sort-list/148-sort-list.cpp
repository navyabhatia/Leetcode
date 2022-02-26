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
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next)
            return head;
        vector<int> temp;
        ListNode* t = head;
        while(t){
            temp.push_back(t->val);
            t = t->next;
        }
        sort(temp.begin(), temp.end());
        int i=0;
        t = head;
        while(t){
            t->val = temp[i++];
            t = t->next;
        }
        return head;
    }
};