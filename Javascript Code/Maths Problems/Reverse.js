const n=parseInt(prompt("Enter the number : "));
let num=Math.abs(n);
let reverseNum=0;
let isNegative=false;
if(n<0)
  isNegative=true;
for(let i=num;i>0;i=Math.floor(i/10))
  reverseNum=reverseNum*10+i%10;
if(isNegative)
  console.log(`Reversed of ${n} is ${-reverseNum}`);
else
  console.log(`Reversed of ${n} is ${reverseNum}`);