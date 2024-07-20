/*
  Given the root of a binary tree, determine if it is a valid binary search tree (BST).

  A valid BST is defined as follows:
    The left subtree of a node contains only nodes with keys less than the node's key.
    The right subtree of a node contains only nodes with keys greater than the node's key.
    Both the left and right subtrees must also be binary search trees.
  
  Constraints:
    The number of nodes in the tree is in the range [1, 104].
    -231 <= Node.val <= 231 - 1
*/
var isValidBST = function(root) {
  return solve(root,Number.MIN_SAFE_INTEGER,Number.MAX_SAFE_INTEGER);
};
function solve(root,min,max){
  if(!root)
    return true;
  if(root.val>=max || root.val<=min)
    return false;
  return solve(root.left,min,root.val) && solve(root.right,root.val,max)
}