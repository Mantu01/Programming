/*
  Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

  Basically, the deletion can be divided into two stages:
    Search for a node to remove.
    If the node is found, delete the node.
*/
var deleteNode = function(root, key) {
  if(!root)
    return null;
  if(root.val===key){
    if(!root.left)
      return root.right;
    if(!root.right)
      return root.left;
    let max=finMax(root.left);
    root.val=max;
    root.left=deleteNode(root.left,max);
  }
  else if(root.val>key)
    root.left=deleteNode(root.left,key)
  else
    root.right=deleteNode(root.right,key);
  return root;
};
function finMax(root){
  if(!root.right)
    return root.val;
  return finMax(root.right);
}