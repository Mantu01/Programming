var findBottomLeftValue = function(root) {
  let q=[];
  let arr=[];
  q.push(root);
  q.push(null);
  while(q.length){
    let temp=q.shift();
    if(!temp){
      if(q.length)
        q.push(null)
      else
        return arr[0];
      arr=[];
      continue;
    }
    arr.push(temp.val);
    if(temp.left)
      q.push(temp.left);
    if(temp.right)
      q.push(temp.right);
  }
};