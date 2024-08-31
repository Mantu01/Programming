/*
  Given the head of a singly linked list, the task is to check if the linked list has a loop. A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the last node is null. then there is no loop.

  Note: You need to return a boolean value true if there is a loop, otherwise false.

  The following is an internal representation of every test case (three inputs).
  A LinkedList and a pos (1-based index)-Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1)

  Constraints:
    1 ≤ number of nodes ≤ 104
    1 ≤ node->data ≤ 103

*/
class Solution {
  detectLoop(head) {
    if(!head || !head.next)
      return false;
    let slow=head,fast=head.next;
    while(fast && fast.next){
      if(fast==slow)
        return true;
      slow=slow.next;
      fast=fast.next.next;
    }
    return false;
  }
}