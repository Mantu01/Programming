/*
  Given the root of a binary tree, return its maximum depth.
  A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
  Constraints:
  -> The number of nodes in the tree is in the range [0, 104].
  -> -100 <= Node.val <= 100
*/
var maxDepth = function(root) {
  return solve(root)[0];
};
let solve=(root)=>{
  if(!root)
    return [0];
  let left=solve(root.left);
  let right=solve(root.right);
  return [Math.max(left[0],right[0])+1];
};