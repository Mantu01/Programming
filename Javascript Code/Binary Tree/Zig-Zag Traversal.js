/*
  Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).
  Constraints:
  -> The number of nodes in the tree is in the range [0, 2000].
  -> -100 <= Node.val <= 100
*/
var zigzagLevelOrder = function(root) {
  if(!root)
    return [];
  let LtoR=true;
  let ans=[];
  let arr=[];
  let q=[root,null];
  while(q.length){
    let temp=q.shift();
    if(!temp){
      if(q.length)
        q.push(null);
      if(LtoR)
        ans.push(arr);
      else
        ans.push(arr.reverse());
      LtoR=!LtoR;
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