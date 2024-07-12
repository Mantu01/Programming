/*
  Given the root of a binary tree, return the postorder traversal of its nodes' values.
  
  Constraints:
  -> The number of nodes in the tree is in the range [0, 100].
  -> -100 <= Node.val <= 100
*/
var postorderTraversal = function(root) {
  if(!root)
    return [];
  let st1=[],ans=[];
  st1.push(root);
  while(st1.length){
    root=st1.pop();
    ans.push(root.val);
    if(root.left)
      st1.push(root.left);
    if(root.right)
      st1.push(root.right);
  }
  return ans.reverse();
};