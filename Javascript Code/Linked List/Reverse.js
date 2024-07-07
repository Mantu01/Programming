/*
  Given the head of a singly linked list, reverse the list, and return the reversed list.
*/
var reverseList = function(head) {
  if(!head || !head.next)
    return head;
  var prev=null;
  var curr=head;
  while(curr){
    const temp=curr.next;
    curr.next=prev;
    prev=curr;
    curr=temp;
  }
  return prev;
};