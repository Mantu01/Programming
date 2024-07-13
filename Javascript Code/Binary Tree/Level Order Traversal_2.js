/*
  Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).
*/
var levelOrderBottom = function(root) {
  if(!root)
    return [];
  let ans=[];
  let q=[];
  q.push(root);
  q.push(null);
  let arr=[];
  while(q.length){
    let temp=q.shift();
    if(!temp){
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
  return ans.reverse();
};