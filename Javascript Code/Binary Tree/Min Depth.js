/*
  Given a binary tree, find its minimum depth.
  The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
  Constraints:
    -> The number of nodes in the tree is in the range [0, 105].
    -> -1000 <= Node.val <= 1000
*/
var minDepth = function(root) {
  if(!root)
    return 0;
  if(!root.left)
    return minDepth(root.right)+1;
  if(!root.right)
    return minDepth(root.left)+1;
  let left=minDepth(root.left);
  let right=minDepth(root.right);
  return Math.min(left,right)+1;
};