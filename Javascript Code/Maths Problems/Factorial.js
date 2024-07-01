const n=parseInt(prompt("Enter the number : "));
let fac=1;
for(let i=2;i<=n;i++)
  fac*=i;
if(n<0)
  console.log("Factorial of negative number is not defined.");
else
  console.log(`Factorial of ${n} is ${fac}`);