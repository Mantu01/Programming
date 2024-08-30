/*
  Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the previous node is null. then there is no loop.  Remove the loop from the linked list, if it is present (we mainly need to make the next of the last node null). Otherwise, keep the linked list as it is.

  Note: Given an integer, pos (1 based index)  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

  The generated output will be true if your submitted code is correct, otherwise, false.

  Expected Time Complexity: O(n)
  Expected Space Complexity: O(1)

  Constraints:
    1 ≤ size of linked list ≤ 105
*/
class Solution {
  removeLoop(head) {
    if(!head || !head.next)
      return ;
    const visited=new Set();
    while(head.next){
      if(visited.has(head.next)){
        head.next=null;
        break;
      }
      visited.add(head);
      head=head.next;
    }
  }
}