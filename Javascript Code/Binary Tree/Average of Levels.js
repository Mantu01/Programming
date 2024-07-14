/*
  Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.
  Constraints:
    -> The number of nodes in the tree is in the range [1, 104].
    -> -231 <= Node.val <= 231 - 1
*/
var averageOfLevels = function(root) {
  if(!root)
    return [];
  let ans=[];
  let q=[];
  q.push(root);
  q.push(null);
  let cnt=0;
  let sum=0;
  while(q.length){
    let temp=q.shift();
    if(!temp){
      if(q.length)
        q.push(null);
      ans.push(sum/cnt);
      cnt=0;
      sum=0;
      continue;
    }
    sum+=temp.val;
    cnt++;
    if(temp.left)
      q.push(temp.left);
    if(temp.right)
      q.push(temp.right);
  }
  return ans;
};