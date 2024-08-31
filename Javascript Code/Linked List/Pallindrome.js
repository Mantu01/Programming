/*
  Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1) 
  Note: You should not use the recursive stack space as well

  Constraints:
    1 <= number of nodes <= 105
    1 ≤ node->data ≤ 103
*/

class Solution {
  isPalindrome(head) {
    
    function mid(head){
      let slow=head,fast=head.next;
      while(fast && fast.next)
        slow=slow.next,fast=fast.next.next;
      return slow;
    }

    function reverse(head){
      if(!head || !head.next)
        return head;
      let prev=null,curr=head,next=null;
      while(curr){
        next=curr.next;
        curr.next=prev;
        prev=curr;
        curr=next;
      }
      return prev;
    }

    let temp=mid(head);
    let curr=temp.next;
    temp.next=null;
    curr=reverse(curr);
    while(head && curr){
      if(head.data!=curr.data)
        return false;
      head=head.next;
      curr=curr.next;
    }
    return true;
  }
}