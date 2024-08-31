/*
  Given the head of a linked list and the number k, Your task is to find the kth node from the end. If k is more than the number of nodes, 
  then the output should be -1.

  Expected Time Complexity: O(n).
  Expected Auxiliary Space: O(1).

  Constraints:
    1 <= number of nodes <= 106
    1 <= node->data , x <= 106
    1 <= k <= 106

*/

class Solution {
  getKthFromLast(head, k) {
    let n=0;
    let curr=head;
    while(curr){
      n++;
      curr=curr.next;
    }
    if(n<k)
      return -1;
    curr=head;
    for(let i=0;i<n-k;i++)
      curr=curr.next;
    return curr.data;
  }
}
