var findMode = function(root) {
  let counts=new Map();
  let maxCnt=0;
  function IOT(node){
    if(!node)
      return ;
    counts.set(node.val,(counts.get(node.val) || 0)+1);
    maxCnt=Math.max(maxCnt,counts.get(node.val));
    IOT(node.left);
    IOT(node.right);
  };
  IOT(root);
  let ans=[];
  for(let [key,val] of counts){
    if(val===maxCnt)
      ans.push(key);
  }
  return ans;
};