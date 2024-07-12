/*
  Given the root of a binary tree, return the preorder traversal of its nodes' values.
  
  Constraints:
  -> The number of nodes in the tree is in the range [0, 100].
  -> -100 <= Node.val <= 100
*/
var preorderTraversal = function(root) {
  if(!root)
    return [];
  let ans=[];
  let st=[];
  st.push(root);
  while(st.length){
    let temp=st.pop();
    ans.push(temp.val);
    if(temp.right)
      st.push(temp.right);
    if(temp.left)
      st.push(temp.left);
  }
  return ans;
};