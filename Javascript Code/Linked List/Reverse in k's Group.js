/*
  Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

  k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
  
  You may not alter the values in the list's nodes, only nodes themselves may be changed.
  
  Constraints:
    -> The number of nodes in the list is n.
    -> 1 <= k <= n <= 5000
    -> 0 <= Node.val <= 1000
*/
let getLength =function(head){
  let curr=head;
  let cnt=0;
  while(curr){
    cnt++;
    curr=curr.next;
  }
  return cnt;
}
let solve=function(head,k,n){
  if(k>n)
    return head;
  let prev=null;
  let curr=head;
  let next=null;
  let cnt=0;
  while(cnt<k && curr){
    next=curr.next;
    curr.next=prev;
    prev=curr;
    curr=next;
    cnt++;
  }
  if(next)
    head.next=solve(next,k,n-k);
  return prev;
}
var reverseKGroup = function(head, k) {
  if(!head || !head.next)
    return head;
  const n=getLength(head);
  return solve(head,k,n);
};