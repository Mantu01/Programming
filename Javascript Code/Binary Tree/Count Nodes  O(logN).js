/*
  Given the root of a complete binary tree, return the number of the nodes in the tree.

  According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

  Design an algorithm that runs in less than O(n) time complexity.
*/
var countNodes = function(root) {
  if(!root)
    return 0;
  return count(root);
};
function count(root){
  let lh=Lheight(root);
  let rh=Rheight(root);
  if(lh===rh)
    return (1<<lh)-1;
  return count(root.left)+count(root.right)+1;
}
function Lheight(root){
  let cnt=0;
  while(root){
    cnt++;
    root=root.left;
  }
  return cnt;
}
function Rheight(root){
  let cnt=0;
  while(root){
    cnt++;
    root=root.right;
  }
  return cnt;
}