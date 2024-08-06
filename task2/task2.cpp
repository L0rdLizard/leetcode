

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
        
    }
};

int main(int argc, char const *argv[])
{
    ListNode l13 = ListNode(3);
    ListNode l12 = ListNode(4, &l13);
    ListNode l1 = ListNode(2, &l12);

    ListNode l23 = ListNode(4);
    ListNode l22 = ListNode(6, &l13);
    ListNode l2 = ListNode(5, &l12);
    return 0;
}
