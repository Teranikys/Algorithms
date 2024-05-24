#include <bits/stdc++.h>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* ptr = res;
        int aux = 0;

        while (l1 != nullptr || l2 != nullptr || aux != 0){
            int curr = (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + aux;
            ptr -> next = new ListNode(curr % 10);
            aux = curr / 10;
            l1 = l1 ? l1 -> next : nullptr ;
            l2 = l2 ? l2 -> next : nullptr ;
            ptr = ptr -> next;
        }

        return res -> next;
    }
};