/*
  Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.
*/
var buildTree = function(inorder, postorder) {
  let map=new Map();
  for (let i = 0; i < inorder.length; i++)
    map.set(inorder[i],i);
  return solve(inorder,0,inorder.length-1,postorder,0,postorder.length-1,map);
}
function solve(ino,inStart,inEnd,pos,posStart,posEnd,map){
  if(inStart>inEnd || posStart>posEnd)
    return null;
  let root=new TreeNode(pos[posEnd]);
  let inRoot=map.get(pre[posEnd]);
  let numLeft=inRoot-inStart;
  root.left=solve(ino,inStart,inRoot-1,pos,posStart,posStart+numLeft-1,map);
  root.right=solve(ino,inRoot+1,inEnd,pos,posStart+numLeft,posEnd-1,map);
  return root;
}