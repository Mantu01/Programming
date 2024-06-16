/*
  Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
  Return the decimal value of the number in the linked list.
  The most significant bit is at the head of the linked list.
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
  public ListNode rev(ListNode head){
    if(head==null || head.next==null)
      return head;
    ListNode curr=head;
    ListNode prev=null;
    ListNode next=null;
    while(curr!=null){
      next=curr.next;
      curr.next=prev;
      prev=curr;
      curr=next;
    }
    return prev;
  }
  public int getDecimalValue(ListNode head) {
    head=rev(head);
    int cnt=1;
    int ans=0;
    while(head!=null){
      ans+=head.val*cnt;
      cnt*=2;
      head=head.next;
    }
    return ans;
  }
}