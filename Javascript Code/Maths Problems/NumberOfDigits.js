const n=parseInt(prompt("Enter the number : "));
let noOfDigits=0;
for (let i=n; i>0;i=Math.floor(i/10))
  noOfDigits++;
if(n)
  console.log((`There are ${noOfDigits} number of digits in given number ${n}.`));
else
  console.log((`There is 1 number of digits in given number ${n}.`));