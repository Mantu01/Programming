/*
  Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.

  It is guaranteed that there is always possible to find a binary search tree with the given requirements for the given test cases.

  A binary search tree is a binary tree where for every node, any descendant of Node.left has a value strictly less than Node.val, and any descendant of Node.right has a value strictly greater than Node.val.

  A preorder traversal of a binary tree displays the value of the node first, then traverses Node.left, then traverses Node.right.
*/
var bstFromPreorder = function(preorder) {
  let i=0;
  function solve(max){
    if(i===preorder.length || preorder[i]>max)
      return null
    let root=new TreeNode(preorder[i++]);
    root.left=solve(root.val);
    root.right=solve(max);
    return root;
  }
  return solve(Number.MAX_SAFE_INTEGER);
};