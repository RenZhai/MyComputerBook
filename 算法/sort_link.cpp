/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *sortList(ListNode *head) {
        if(head==NULL||head->next==NULL)
        {
        	return head;
        }
        ListNode mid=FindMid(head);
        ListNode right=mid.next;
        mid.next=NULL;
        return merge(sortList(head),sortList(right));

    }
private:
	ListNode merge(ListNode &a,ListNode&b)
	{
		ListNode dummy=new ListNode(0);
		ListNode cur=dummy;
		while(a!=NULL&&b!=NULL)
		{
			if(a.val<b.val)
			{
				cur.next=a;
				a=a.next;

			}
			else
			{
				cur.next=b;
				b=b.next;
			}
			cur=cur.next;
		}
		if (a!=NULL)
			cur.next=a;
		else if(b!=NULL)
			cur.next=b;


		return dummy.next;
	}
	ListNode FindMid(ListNode head)
	{
		if(head==NULL)
		{
			return head;
		}
		ListNode fast=head;
		ListNode slow=head;
		while(fast.next!=NULL&&fast.next.next!=NULL)
		{
			fast=fast.next.next;
			slow=slow.next;

		}
		return slow;
	}
    
    
    
};