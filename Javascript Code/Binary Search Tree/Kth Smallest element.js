/*
  Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
*/
var kthSmallest = function(root, k) {
  let ans=null;
  let cnt=0;
  function solve(node){
    if(!node || ans)
      return ;
    solve(node.left);
    cnt++;
    if(cnt===k){
      ans=node.val;
      return ;
    }
    solve(node.right);
  };
  solve(root);
  return ans;
};