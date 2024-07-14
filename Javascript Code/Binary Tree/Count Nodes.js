var countNodes = function(root) {
  let ans=[0];
  solve(root,ans);
  return ans[0];
};
let solve=(root,ans)=>{
  if(!root)
    return ;
  ans[0]++;
  solve(root.left,ans);
  solve(root.right,ans);
};