/*
  Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).
  Constraints:
  -> The number of nodes in the tree will be in the range [0, 104].
  -> -231 <= Node.val <= 231 - 1
*/
var largestValues = function(root) {
  if(!root)
    return [];
  let ans=[];
  let q=[root,null];
  let arr=[];
  while(q.length){
    let temp=q.shift();
    if(!temp){
      if(q.length)
        q.push(null);
      ans.push(largest(arr));
      arr=[];
      continue;
    }
    arr.push(temp.val);
    if(temp.left)
      q.push(temp.left);
    if(temp.right)
      q.push(temp.right);
  }
  function largest(Arr){
    let num=Arr[0];
    for(let i=1;i<Arr.length;i++){
      if(num<Arr[i])
        num=Arr[i];
    }
    return num;
  }
  return ans;
};