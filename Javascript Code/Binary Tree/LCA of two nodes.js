/*
  Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

  According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
*/
var lowestCommonAncestor = function(root, p, q) {
  if(!root)
    return null;
  if(root===p || root===q)
    return root;
  let left=lowestCommonAncestor(root.left,p,q);
  let right=lowestCommonAncestor(root.right,p,q);
  if(left && right)
    return root;
  return left?left:right;
};