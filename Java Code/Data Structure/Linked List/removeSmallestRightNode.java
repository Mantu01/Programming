/*
  You are given the head of a linked list.

  Remove every node which has a node with a greater value anywhere to the right side of it.

  Return the head of the modified linked list.
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
  public ListNode removeNodes(ListNode head) {
    head=reverse(head);
    ListNode curr=head;
    int max=head.val;
    while(curr.next!=null){
      if(curr.next.val<max)
        curr.next=curr.next.next;
      else{
        max=curr.next.val;
        curr=curr.next;
      }
    }
    return reverse(head);
  }
  public ListNode reverse(ListNode head){
    if(head==null || head.next==null)
      return head;
    ListNode rev=reverse(head.next);
    head.next.next=head;
    head.next=null;
    return rev;
  }
}