/*
  Given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.
  You can return the answer in any order.
*/
function track_parent(parent,root){
  let q=[root];
  while(q.length){
    let temp=q.shift();
    if(temp.left){
      parent.set(temp.left,temp);
      q.push(temp.left);
    }
    if(temp.right){
      parent.set(temp.right,temp);
      q.push(temp.right);
    }
  }
}
var distanceK = function(root, target, k) {
  let parent=new Map();
  track_parent(parent,root);
  let visited=new Map();
  let q=[target];
  visited.set(target,true);
  let level=0;
  while(q.length){
    if(level++===k)
      break;
    let n=q.length;
    for(let i=0;i<n;i++){
      let temp=q.shift();
      if(temp.left && !visited.get(temp.left)){
        q.push(temp.left);
        visited.set(temp.left,true);
      }
      if(temp.right && !visited.get(temp.right)){
        q.push(temp.right);
        visited.set(temp.right,true);
      }
      if(parent.has(temp) && !visited.get(parent.get(temp))){
        q.push(parent.get(temp));
        visited.set(parent.get(temp),true);
      }
    }
  }
  let ans=[];
  for(let i=0;i<q.length;i++)
    ans.push(q[i].val);
  return ans;
};