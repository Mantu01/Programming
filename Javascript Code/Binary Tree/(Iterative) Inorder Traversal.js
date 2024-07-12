/*
  Given the root of a binary tree, return the inorder traversal of its nodes' values.
  Constraints:
    -> The number of nodes in the tree is in the range [0, 100].
    -> -100 <= Node.val <= 100
    
  Follow up: Recursive solution is trivial, could you do it iteratively?
*/
var inorderTraversal = function(root) {
  let ans=[];
  let st=[];
  let node=root;
  while(true){
    if(node){
      st.push(node);
      node=node.left;
    }
    else{
      if(!st.length)
        break;
      node=st.pop();
      ans.push(node.val);
      node=node.right;
    }
  }
  return ans;
};