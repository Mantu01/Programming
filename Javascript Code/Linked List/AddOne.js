/*
  You are given a linked list where each element in the list is a node and have an integer data. You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 

  Note: The head represents the first element of the given array.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1)

  Constraints:
    1 <= len(list) <= 105
    0 <= list[i] <= 9

*/

class Solution {
  addOne(node) {
    function reverse(node){
      let prev=null,curr=node,next=null;
      while(curr){
        next=curr.next;
        curr.next=prev;
        prev=curr;
        curr=next;
      }
      return prev;
    }
    let curr=reverse(node);
    let ans=curr;
    let c=1;
    let prev=null;
    while(curr){
      let temp=curr.data+c;
      curr.data=temp%10;
      c=Math.floor(temp/10);
      prev=curr;
      curr=curr.next;
    }
    if(c){
      prev.next=new Node(c);
    }
    return reverse(ans);
  }
}