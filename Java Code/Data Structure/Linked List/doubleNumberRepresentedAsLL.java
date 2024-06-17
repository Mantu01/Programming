/*
  You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.
  Return the head of the linked list after doubling it.
  
  Input: head = [1,8,9]
  Output: [3,7,8]

  Constraints:

  -> The number of nodes in the list is in the range [1, 104]
  -> 0 <= Node.val <= 9
  -> The input is generated such that the list represents a number that does not have leading zeros, except the number 0 itself.
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
  public ListNode reverse(ListNode head){
    if(head==null || head.next==null)
      return head;
    ListNode ans=reverse(head.next);
    head.next.next=head;    head.next=null;
    return ans;
  }
  public ListNode doubleIt(ListNode head) {
    head=reverse(head);
    ListNode curr=head;
    int c=0;
    while(curr!=null){
      c=curr.val*2+c;
      curr.val=c%10;
      c/=10;
      curr=curr.next;
    }
    if(c!=0){
      ListNode temp=new ListNode(c);
      head=reverse(head);
      temp.next=head;
      return temp;
    }
    return reverse(head);
  }
}