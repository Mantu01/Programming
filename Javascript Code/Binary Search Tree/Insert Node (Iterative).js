/*
  You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

  Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.
  
  Constraints:
    -> The number of nodes in the tree will be in the range [0, 104].
    -> -108 <= Node.val <= 108
    -> All the values Node.val are unique.
    -> -108 <= val <= 108
    -> It's guaranteed that val does not exist in the original BST.
*/
var insertIntoBST = function(root, val) {
  if(!root)
    return new TreeNode(val);
  let curr=root;
  while(true){
    if(curr.val>val){
      if(curr.left)
        curr=curr.left;
      else{
        curr.left=new TreeNode(val);
        break;
      }
    }
    else{
      if(curr.right)
        curr=curr.right;
      else{
        curr.right=new TreeNode(val);
        break;
      }
    }
  }
  return root;
};