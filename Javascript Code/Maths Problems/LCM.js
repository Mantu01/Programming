const n=parseInt(prompt("Enter how many numbers you want : "));
let num=new Array(n);
for(let i=0;i<n;i++){
  num[i]=parseInt(prompt(`Enter number ${i+1} : `));
}
function findLargest(){
  let large=num[0];
  for(let i=1;i<n;i++){
    if(num[i]<large)
      large=num[i];
  }
  return large;
}
function isMultiple(k){
  for(let i=0;i<n;i++){
    if(k%num[i]!=0)
      return false;
  }
  return true;
}
let largest=findLargest();
let lcm=1;
for(let i=1;true;i++){
  lcm=largest*i;
  if(isMultiple(lcm))
    break;
}
console.log(`LCM(${num}) = ${lcm}.`)