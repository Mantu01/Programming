/*
  Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
  Constraints:
    -> The number of nodes in the tree is in the range [1, 1000].
    -> -100 <= Node.val <= 100
*/
var isSymmetric = function(root) {
  if(!root)
    return true;
  return solve(root.left,root.right);
};
let solve=(r1,r2)=>{
  if(!r1 && !r2)
    return true;
  if((r1 && !r2) || (!r1 && r2) || (r1.val!==r2.val))
    return false;
  return solve(r1.left,r2.right) && solve(r1.right,r2.left);
};