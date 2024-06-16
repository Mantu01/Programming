/*
  Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
  
  Constraints:

  -> The number of nodes in the list is in the range [0, 104].
  -> 1 <= Node.val <= 50
  -> 0 <= val <= 50
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
  public ListNode removeElements(ListNode head, int val) {
    ListNode ans=new ListNode(-1);
    ListNode curr=ans;
    while(head!=null){
      if(head.val!=val){
        curr.next=head;
        curr=curr.next;
      }
      head=head.next;
    }
    curr.next=null;
    return ans.next;
  }
}