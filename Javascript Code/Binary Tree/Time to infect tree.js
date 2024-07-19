/*
  You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.
  
  Each minute, a node becomes infected if:
    The node is currently uninfected.
    The node is adjacent to an infected node.
  
  Return the number of minutes needed for the entire tree to be infected.
  
  Constraints:
    -> The number of nodes in the tree is in the range [1, 105].
    -> 1 <= Node.val <= 105
    -> Each node has a unique value.
    -> A node with a value of start exists in the tree.
*/
var amountOfTime = function(root, start) {
  let parent=new Map();
  let target=track_parents(root,parent,start);
  let visited=new Map();
  let ans=0;
  visited.set(target,true);
  let q=[target];
  while(q.length){
    let fl=false;
    let n=q.length;
    for(let i=0;i<n;i++){
      let temp=q.shift();
      if(temp.left && !visited.get(temp.left)){
        q.push(temp.left);
        visited.set(temp.left,true);
        fl=true;
      }
      if(temp.right && !visited.get(temp.right)){
        q.push(temp.right);
        visited.set(temp.right,true);
        fl=true;
      }
      if(parent.has(temp) && !visited.get(parent.get(temp))){
        q.push(parent.get(temp));
        visited.set(parent.get(temp),true);
        fl=true;
      }
    }
    if(fl)
      ans++;
  }
  return ans;
};
function track_parents(root,parent,start){
  let q=[root];
  let res=null;
  while(q.length){
    let temp=q.shift();
    if(temp.val===start)
      res=temp;
    if(temp.left){
      parent.set(temp.left,temp);
      q.push(temp.left);
    }
    if(temp.right){
      parent.set(temp.right,temp);
      q.push(temp.right);
    }
  }
  return res;
}