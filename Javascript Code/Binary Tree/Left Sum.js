/*
  Given the root of a binary tree, return the sum of all left leaves.
  A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.
  
  Input: root = [3,9,20,null,null,15,7]
  Output: 24
  Explanation: There are two left leaves in the binary tree, with values 9 and 15 respectively.
  
  Constraints:
    -> The number of nodes in the tree is in the range [1, 1000].
    -> -1000 <= Node.val <= 1000
*/
var sumOfLeftLeaves = function(root) {
  let ans=[0];
  solve(root,ans);
  return ans[0];
};
function solve(root,ans){
  if(!root)
    return ;
  if(root.left && !root.left.left && !root.left.right)
    ans[0]+=root.left.val;
  solve(root.left,ans);
  solve(root.right,ans);
}