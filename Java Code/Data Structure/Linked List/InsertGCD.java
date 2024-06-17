/*
  Given the head of a linked list head, in which each node contains an integer value
  
  Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.
  
  Return the linked list after insertion.
  
  The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
  
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
  public int HCF(int a, int b){
    int c=a<b?a:b;
    for(int i=c;i>0;i--){
      if(a%i==0 && b%i==0)
        return i;
    }
    return 1;
  }
  public ListNode insertGreatestCommonDivisors(ListNode head) {
    ListNode curr=head;
    while(curr.next!=null){
      ListNode temp=new ListNode(HCF(curr.val,curr.next.val));
      temp.next=curr.next;
      curr.next=temp;
      curr=temp.next;
    }
    return head;
  }
}