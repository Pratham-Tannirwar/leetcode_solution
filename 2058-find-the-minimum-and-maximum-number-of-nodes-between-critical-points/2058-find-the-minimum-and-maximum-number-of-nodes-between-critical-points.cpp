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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> pos;
    
    ListNode* prev = head;
    ListNode* curr = head->next;
    ListNode* nextt = curr->next;
    
    int index = 1;
    
    while (nextt) {
        if ((curr->val > prev->val && curr->val > nextt->val) ||
            (curr->val < prev->val && curr->val < nextt->val)) {
            pos.push_back(index);
        }
        
        prev = curr;
        curr = nextt;
        nextt = nextt->next;
        index++;
    }
    
    if (pos.size() < 2)
        return {-1, -1};
    
    int mini = INT_MAX;
    
    for (int i = 1; i < pos.size(); i++)
        mini = min(mini, pos[i] - pos[i - 1]);
    
    int maxi = pos.back() - pos.front();
    
    return {mini, maxi};
    }
};