#include <iostream>
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
        ListNode* result = new ListNode(0);
        ListNode* curResult = result;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            curResult->next = new ListNode(sum % 10);
            curResult = curResult->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (carry > 0) {
            curResult->next = new ListNode(carry);
        }

        ListNode* head = result->next;
        delete result;
        return head;
    }
};

int main(int argc, char const *argv[])
{
    ListNode l13 = ListNode(3);
    ListNode l12 = ListNode(4, &l13);
    ListNode l1 = ListNode(2, &l12);

    ListNode l23 = ListNode(4);
    ListNode l22 = ListNode(6, &l23);
    ListNode l2 = ListNode(5, &l22);

    cout << l1.val;
    cout << l1.next->val;
    cout << l1.next->next->val;

    cout << endl;
    Solution solution = Solution();
    solution.addTwoNumbers(&l1, &l2)->val;
    return 0;
}
