/*
  Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

  Basically, the deletion can be divided into two stages:
    Search for a node to remove.
    If the node is found, delete the node.
*/
var deleteNode = function(root, key) {
  if(!root)
    return root;
  if(root.val===key)
    return solve(root);
  let curr=root;
  while(curr){
    if(curr.val>key){
      if(curr.left && curr.left.val===key){
        curr.left=solve(curr.left);
        break;
      }
      curr=curr.left;
    }else{
      if(curr.right && curr.right.val===key){
        curr.right=solve(curr.right);
        break;
      }
      curr=curr.right;
    }
  }
  return root;
};
function solve(root){
  if(!root.left)
    return root.right;
  else if(!root.right)
    return root.left;
  let rightChild=root.right;
  let lastRight=root.left;
  while(lastRight.right)
    lastRight=lastRight.right;
  lastRight.right=rightChild;
  return root.left;
}