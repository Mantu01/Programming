/*
  Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
  
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
  public ListNode swapPairs(ListNode head) {
    ListNode prev=null;
    ListNode curr=head;
    ListNode next=null;
    for(int i=0;i<2 && curr!=null;i++){
      next=curr.next;
      curr.next=prev;
      prev=curr;
      curr=next;
    }
    if(next!=null)
      head.next=swapPairs(next);
    return prev;
  }
}