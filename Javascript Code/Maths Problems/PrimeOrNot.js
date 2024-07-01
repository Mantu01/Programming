const n=parseInt(prompt("Enter the number : "));
let isPrime=true;
for(let i=2;i<n;i++){
  if(n%i==0)
    isPrime=false;
}
if(!n || n==1 || n<0)
  console.log(`${n} is neither prime not consonenet.`);
else if(isPrime)
  console.log(`${n} is prime.`);
else
  console.log(`${n} is consonenet.`);