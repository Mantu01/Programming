/*
  Given a binary tree, determine if it is height-balanced.
  Constraints:
    -> The number of nodes in the tree is in the range [0, 5000].
    -> -104 <= Node.val <= 104
*/
var isBalanced = function(root) {
  return solve(root)[0];
};
let solve=(root)=>{
  if(!root)
    return [true,0];
  let left=solve(root.left);
  let right=solve(root.right);
  let res=[true,0];
  let diff=Math.abs(left[1]-right[1]);
  res[0]=left[0] && right[0] && diff<=1;
  res[1]=Math.max(left[1],right[1])+1;
  return res;
}