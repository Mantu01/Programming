/*
  Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
  public int getLength(ListNode head){
    int cnt=0;
    while(head!=null){
      head=head.next;
      cnt++;
    }
    return cnt;
  }
  public ListNode removeNthFromEnd(ListNode head, int n) {
    if(head==null)
      return null;
    ListNode curr=head;
    int size=getLength(head);
    n=size-n+1;
    if(n==1)
      return head.next;
    while((n--)>2)
      curr=curr.next;
    curr.next=curr.next.next;
    return head;
  }
}