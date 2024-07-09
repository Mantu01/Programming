/*
  Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
  
  Constraints:
    -> The number of nodes in the tree is in the range [0, 2000].
    -> -1000 <= Node.val <= 1000
*/
var levelOrder = function(root) {
  if(!root)
    return[];
  let ans=[];
  let q=[];
  q.push(root);
  q.push(null);
  let arr=[];
  while(q.length){
    let temp=q[0];
    q.shift();
    if(temp===null){
      if(q.length)
        q.push(null);
      ans.push(arr);
      arr=[];
      continue;
    }
    arr.push(temp.val);
    if(temp.left)
      q.push(temp.left);
    if(temp.right)
      q.push(temp.right);
  }
  return ans;
};