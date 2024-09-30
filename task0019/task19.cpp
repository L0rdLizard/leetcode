#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *first = head;
        ListNode *second = dummy;
        for (int i = 0; i < n; i++)
        {
            first = first->next;
        }
        while (first != nullptr)
        {
            first = first->next;
            second = second->next;
            cout << first->val << " " << second->val << endl;
        }
        second->next = second->next->next;
        return dummy->next;
    }
};

int main(int argc, char const *argv[])
{
    ListNode *head = new ListNode(1);
    ListNode *node = head;
    for (int i = 2; i <= 5; i++)
    {
        node->next = new ListNode(i);
        node = node->next;
    }
    Solution s;
    s.removeNthFromEnd(head, 2);
    for (ListNode *node = head; node != nullptr; node = node->next)
    {
        // cout << node->val << " ";
    }
    return 0;
}
