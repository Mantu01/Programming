const n=parseInt(prompt("Enter the number : "));
let factorSum=0;
for(let i=1;i<n;i++){
  if(n%i==0)
    factorSum+=i;
}
if(n<0)
  console.log("Not define for negative numbers.");
else if(factorSum==n)
  console.log(`${n} is a perfect number.`);
else
  console.log(`${n} is not a perfect number.`);