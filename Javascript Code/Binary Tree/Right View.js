/*
  Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
*/
var rightSideView = function(root) {
  let ans=[];
  solve(root,ans,0);
  return ans;
};
let solve=(root,ans,lev)=>{
  if(!root)
    return ;
  if(ans.length===lev)
    ans.push(root.val);
  solve(root.right,ans,lev+1);
  solve(root.left,ans,lev+1);
}