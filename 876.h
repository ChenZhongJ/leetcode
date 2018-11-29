#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=1; x<=y; x++)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
 		std::vector<ListNode> v;
		v.push_back(&head);
		while(head->next != NULL){
			head = head->next;
			v.push_back(&head);
		}       
		int len = v.size();
		if(len == 1)
			return head;
		return v[len/2];
    }
};