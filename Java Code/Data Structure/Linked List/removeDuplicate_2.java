/*
  Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
  
  Input: head = [1,2,3,3,4,4,5]
  Output: [1,2,5]
  
  Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.
*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
  public ListNode deleteDuplicates(ListNode head) {
    if(head==null || head.next==null)
      return head;
    int prev=head.val-1;
    ListNode ans=new ListNode(prev);
    ListNode curr=ans;
    while(head.next!=null){
      if(prev!=head.val && head.val!=head.next.val){
        curr.next=head;
        curr=curr.next;
      }
      prev=head.val;
      head=head.next;
    }
    if(prev!=head.val){
      curr.next=head;
      curr=curr.next;
    }
    curr.next=null;
    return ans.next;
  }
}