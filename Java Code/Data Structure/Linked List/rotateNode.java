/*
  Given the head of a linked list, rotate the list to the right by k places.
  
  Input: head = [1,2,3,4,5], k = 2
  Output: [4,5,1,2,3]
  
  Constraints:

  -> The number of nodes in the list is in the range [0, 500].
  -> -100 <= Node.val <= 100
  -> 0 <= k <= 2 * 109
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
      cnt++;
      head=head.next;
    }
    return cnt;
  }
  public ListNode rotateRight(ListNode head, int k) {
    if(head==null || head.next==null)
      return head;
    int n=getLength(head);
    k=k%n;
    if(k==0)
      return head;
    ListNode curr=head;
    for(int i=0;i<n-k-1;i++)
      curr=curr.next;
    ListNode temp=curr.next;
    curr.next=null;
    curr=temp;
    ListNode curr2=curr;
    while(curr2.next!=null)
      curr2=curr2.next;
    curr2.next=head;
    return curr;
  }
}