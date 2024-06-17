/*
  You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

  For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

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
  public ListNode mergeNodes(ListNode head) {
    int sum=0;
    ListNode curr1=head.next;
    ListNode curr2=head;
    while(curr1!=null){
      sum+=curr1.val;
      if(curr1.val==0){
        curr2.next.val=sum;
        curr2=curr2.next;
        sum=0;
      }
      curr1=curr1.next;
    }
    curr2.next=null;
    return head.next;
  }
}