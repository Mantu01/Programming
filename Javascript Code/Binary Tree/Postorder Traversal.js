/*
  Given the root of a binary tree, return the postorder traversal of its nodes' values.
  
  Constraints:
  -> The number of nodes in the tree is in the range [0, 100].
  -> -100 <= Node.val <= 100
*/
var postorderTraversal = function(root) {
  let ans=[];
  solve(root,ans);
  return ans;
};
function solve(root,ans){
  if(!root)
    return;
  solve(root.left,ans);
  solve(root.right,ans);
  ans.push(root.val);
}