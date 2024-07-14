/*
  Given the root of a binary tree, return the length of the diameter of the tree.
  The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
  The length of a path between two nodes is represented by the number of edges between them.
*/
var diameterOfBinaryTree = function(root) {
  let ans=[0];
  solve(root,ans);
  return ans[0];
};
let solve=(root,ans)=>{
  if(!root)
    return 0;
  let left=solve(root.left,ans);
  let right=solve(root.right,ans);
  ans[0]=Math.max(ans[0],left+right);
  return Math.max(left,right)+1;
}