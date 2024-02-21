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
        ListNode* temp=head;
         string binary="";
        while(temp!=nullptr){
            binary=binary+to_string(temp->val);
            temp=temp->next;
        }
         int decimal = 0;
         int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        int bit = binary[i] - '0';
        decimal += bit * pow(2, power);
      
        ++power;
    }
        return decimal;
    }
};