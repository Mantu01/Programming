/*
  You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

  You may assume the two numbers do not contain any leading zero, except the number 0 itself.
  
  Input: l1 = [2,4,3], l2 = [5,6,4]
  Output: [7,0,8]
  Explanation: 342 + 465 = 807.
  
  Constraints:
    -> The number of nodes in each linked list is in the range [1, 100].
    -> 0 <= Node.val <= 9
    -> It is guaranteed that the list represents a number that does not have leading zeros.
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
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    if(l1==null)
      return l2;
    if(l2==null)
        return l1;
    int c=0;
    ListNode ans=new ListNode(-1);
    ListNode curr=ans;
    while(l1!=null && l2!=null){
      c=l1.val+l2.val+c;
      curr.next=new ListNode(c%10);
      curr=curr.next;
      c=c/10;
      l1=l1.next;
      l2=l2.next;
    }
    while(l1!=null){
      c=c+l1.val;
      curr.next=new ListNode(c%10);
      c=c/10;
      l1=l1.next;
      curr=curr.next;
    }
    while(l2!=null){
      c=c+l2.val;
      curr.next=new ListNode(c%10);
      c=c/10;
      l2=l2.next;
      curr=curr.next;
    }
    if(c!=0)
      curr.next=new ListNode(c);
    return ans.next;
  }
}
