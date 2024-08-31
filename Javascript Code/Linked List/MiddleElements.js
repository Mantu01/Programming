/*
  Given the head of a linked list, the task is to find the middle. For example, the middle of 1-> 2->3->4->5 is 3. If there are two middle nodes (even count), return the second middle. For example, middle of 1->2->3->4->5->6 is 4.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1)

  Constraints:
    1 <= no. of nodes <= 105
*/

class Solution {
  getMiddle(node) {
    let slow=node,fast=node;
    while(fast && fast.next)
      slow=slow.next,fast=fast.next.next;
    return slow.data;
  }
}