/*
  Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.
*/
var buildTree = function(preorder, inorder) {
  let map=new Map();
  for(let i=0;i<inorder.length;i++)
    map.set(inorder[i],i);
  return solve(preorder,0,preorder.length-1,inorder,0,inorder.length,map);
};
function solve(pre,preStart,preEnd,ino,inStart,inEnd,map){
  if(preStart>preEnd || inStart>inEnd)
    return null;  
  let root=new TreeNode(pre[preStart]);
  let inRoot=map.get(pre[preStart]);
  let numsleft=inRoot-inStart;
  root.left=solve(pre,preStart+1,preStart+numsleft,ino,inStart,inRoot-1,map);
  root.right=solve(pre,preStart+numsleft+1,preEnd,ino,inRoot+1,inEnd,map);
  return root;
}