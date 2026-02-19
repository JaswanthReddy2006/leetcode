1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode*temp1=l1;
15        ListNode*temp2=l2;
16        int c=0;
17        ListNode*sumhead=new ListNode(0);
18        ListNode*th=sumhead;
19        while(temp1!=nullptr||temp2!=nullptr||c){
20          int x=(temp1!=nullptr)?temp1->val:0;
21          int y=(temp2!=nullptr)?temp2->val:0;
22          int sum=x+y+c;
23          c=sum/10;
24          th->next=new ListNode(sum%10);
25          th = th->next;
26          if (temp1!= nullptr) temp1 = temp1->next;
27          if (temp2!= nullptr) temp2 = temp2->next;
28        }
29        return sumhead->next;
30        
31        
32    }
33};