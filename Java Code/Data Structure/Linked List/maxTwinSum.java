/*
  In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

  For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
  The twin sum is defined as the sum of a node and its twin.

  Given the head of a linked list with even length, return the maximum twin sum of the linked list.
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
import java.util.*;
class Solution {
  public int pairSum(ListNode head) {
    int ans=0;
    Vector<Integer>arr=new Vector<>();
    while(head!=null){
      arr.add(head.val);
      head=head.next;
    }
    int n=arr.size();
    for(int i=0;i<n;i++){
      if(i>=0 && i<=n/2-1){
        int sum=arr.get(i)+arr.get(n-i-1);
        if(sum>ans)
          ans=sum;
      }
    }
    return ans;
  }
}