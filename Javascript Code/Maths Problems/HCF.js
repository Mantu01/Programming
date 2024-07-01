const n=parseInt(prompt("Enter how many numbers you want : "));
let num=new Array(n);
for(let i=0;i<n;i++){
  num[i]=parseInt(prompt(`Enter number ${i+1} : `));
}
function findSmallest(){
  let small=num[0];
  for(let i=1;i<n;i++){
    if(num[i]<small)
      small=num[i];
  }
  return small;
}
function isFactor(k){
  for(let i=0;i<n;i++){
    if(num[i]%k!=0)
      return false;
  }
  return true;
}
let hcf=1;
let smallest=findSmallest();
for(let i=1;i<=smallest;i++){
  if(isFactor(i))
    hcf=i;
}
console.log(`HCF(${num}) = ${hcf}.`)