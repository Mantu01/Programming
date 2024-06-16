/*
  Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
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
  public ListNode getMid(ListNode head){
    ListNode slow=head;
    ListNode fast=head;
    while(fast!=null && fast.next!=null){
      slow=slow.next;
      fast=fast.next.next;
    }
    return slow;
  }
  public ListNode rev(ListNode head){
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
  public boolean isPalindrome(ListNode head) {
    if(head.next==null)
      return true;
    ListNode h2=getMid(head);
    h2=rev(h2);
    while(h2!=null){
      if(head.val!=h2.val)
        return false;
      head=head.next;
      h2=h2.next;
    }
    return true;
  }
}