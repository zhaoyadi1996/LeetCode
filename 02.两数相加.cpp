#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	struct ListNode* result = new ListNode(0);
	ListNode* p, * q, * r, * s;
	p = l1;
	q = l2;
	r = result;
	int carry = 0;
	while (p || q) {
		int x = (p != NULL) ? p->val : 0;
		int y = (q != NULL) ? q->val : 0;
		int sum = x + y + carry;

		s = new ListNode((sum % 10));
		r->next = s;
		r = r->next;
		carry = sum / 10;

		if (p)   p = p->next;
		if (q)   q = q->next;
	}

	if (carry == 1) {
		s = new ListNode(1);
		r->next = s;
	}
	return result->next;
}