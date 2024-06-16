/*
  Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
  
  Constraints:

  -> The number of nodes of listA is in the m.
  -> The number of nodes of listB is in the n.
  -> 1 <= m, n <= 3 * 104
  -> 1 <= Node.val <= 105
  -> 0 <= skipA < m
  -> 0 <= skipB < n
  -> intersectVal is 0 if listA and listB do not intersect.
  -> intersectVal == listA[skipA] == listB[skipB] if listA and listB intersect.

*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
  public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
    HashMap<ListNode,Integer>map=new HashMap<>();
    while(headA!=null){
      map.put(headA,1);
      headA=headA.next;
    }
    while(headB!=null){
      if(map.containsKey(headB))
          return headB;
      headB=headB.next;
    }
    return null;
  }
}